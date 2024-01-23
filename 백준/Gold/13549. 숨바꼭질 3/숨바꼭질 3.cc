#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int MAX = 100001;
const int INF = 1e9;

int n, k;
vector<int> dist(MAX, INF);

void dijkstra(int start) {
    priority_queue<pair<int, int>> pq;
    pq.push({ 0, start });
    dist[start] = 0;

    while (!pq.empty()) {
        int cur_cost = -pq.top().first;
        int cur_node = pq.top().second;
        pq.pop();

        if (dist[cur_node] < cur_cost) 
            continue;

        // 걷기
        for (int i = cur_node - 1; i <= cur_node + 1; ++i) {
            int next_node = i;
            if (next_node >= 0 && next_node < MAX) {
                int next_cost = cur_cost + 1;
                if (dist[next_node] > next_cost) {
                    dist[next_node] = next_cost;
                    pq.push({ -next_cost, next_node });
                }
            }
        }

        // 순간이동
        int teleport_node = 2 * cur_node;
        if (teleport_node >= 0 && teleport_node < MAX) {
            int teleport_cost = cur_cost;
            if (dist[teleport_node] > teleport_cost) {
                dist[teleport_node] = teleport_cost;
                pq.push({ -teleport_cost, teleport_node });
            }
        }
    }
}

int main() {
    cin >> n >> k;

    dijkstra(n);

    cout << dist[k] << endl;

    return 0;
}