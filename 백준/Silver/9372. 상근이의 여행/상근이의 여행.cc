#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> graph;
vector<int> check;

int dfs(int node, int cnt) { 
    check[node] = 1; //현재 국가를 방문한 것으로 표시하기 위해 check[node] = 1로 설정
    for (int i = 0; i < graph[node].size(); i++) {
        int n = graph[node][i];
        if (check[n] == 0) { //연결된 국가가 아직 방문하지 않은 국가라면
            cnt = dfs(n, cnt + 1); //재귀적으로 dfs 함수를 호출하여 해당 국가를 탐색하고 cnt를 1 증가
        }
    }
    return cnt;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;
        // assign()은 벡터의 크기를 지정하고 초기화하는 데 사용
        graph.assign(N + 1, vector<int>()); // graph 벡터를 크기가 N + 1인 빈 벡터의 벡터로 초기화
        check.assign(N + 1, 0);

        for (int i = 0; i < M; i++) {
            int a, b; //주어진 비행 스케줄 정보에서 a와 b는 서로 연결된 국가를 나타내는 쌍
            cin >> a >> b;
            graph[a].push_back(b); //graph[a]는 a 국가와 연결된 다른 국가들을 저장하는 벡터
            //왕복 비행은 양방향 그래프이므로, a에서 b로 가는 비행과 동시에 b에서 a로 오는 비행이 존재한다.
            graph[b].push_back(a);
        }
        check[1] = 0;

        int cnt = dfs(1, 0);
        cout << cnt << "\n";
    }

    return 0;
}