#include <iostream>
#include <vector>
using namespace std;


const int INF = 10005;
int N, D;

vector<int> m(10005, INF);
vector<pair<int, int>> v[10005];

int main() {
    cin >> N >> D;

    for (int i = 0; i < N; i++) {
        int start, end, length;
        cin >> start >> end >> length;
        if (end > D || end - start < length)
            continue;
        v[end].push_back({ start, length });
    }
    m[0] = 0;

    for (int i = 1; i <= D; i++) {
        m[i] = m[i - 1] + 1;
        for (int j = 0; j < (int)v[i].size(); j++) {
            m[i] = min(m[i], m[v[i][j].first] + v[i][j].second);
        }

    }
    cout << m[D];
}