#include <iostream>
#include <queue>
#include <vector>

using namespace std;

const int MAX = 100000;
bool visited[MAX + 1] = {};

int bfs(int n, int k) {
    queue<pair<int, int>> q;
    q.push({ n, 0 });  // 수빈이의 현재 위치와 시간을 큐에 삽입
    visited[n] = true;

    while (!q.empty()) {
        int current = q.front().first;
        int time = q.front().second;
        q.pop();

        if (current == k) {
            return time; 
        }

        if (current - 1 >= 0 && !visited[current - 1]) {
            q.push({ current - 1, time + 1 });
            visited[current - 1] = true;
        }

        if (current + 1 <= MAX && !visited[current + 1]) {
            q.push({ current + 1, time + 1 });
            visited[current + 1] = true;
        }

        if (current * 2 <= MAX && !visited[current * 2]) {
            q.push({ current * 2, time + 1 });
            visited[current * 2] = true;
        }
    }

    return -1; 
}

int main() {
    int n, k;
    cin >> n >> k;

    int result = bfs(n, k);
    cout << result << "\n";

    return 0;
}
