#include <iostream>
#include <queue>

using namespace std;

int n, m, k, x;
int d[300001];
vector<int> r[300001]; //모든 간선 정보를 vector 배열에 담는다

void dijkstra(int s) { //그래프의 한 지점에서 각 노드까지의 최단거리를 계산
	d[s] = 0;
	queue<int> q; 
	q.push(s);
	while (!q.empty()) { //시작 노드를 queue에 넣고, while문을 돌린다.
		int cur = q.front();//현재 노드
		q.pop();//queue에 있는 원소를 하나하나 꺼내면서
		for (int i = 0; i < r[cur].size(); i++) { //간선 vector를 이용해 이어져있는 노드를 구한다.
			int next = r[cur][i];
			if (d[next] > d[cur] + 1) { //현재 최단거리 배열에 있는 값보다 현재 노드의 최단거리 + 1 값이 작으면
				d[next] = d[cur] + 1; //최단거리 배열을 갱신
				q.push(next);
			}
		}
	}
}

int main() {
	cin >> n >> m >> k >> x;
	for (int i = 1; i <= n; i++) {
		d[i] = 999999999;
	}

	for (int i = 0; i < m; i++) {
		int s, e;
		cin >> s >> e;
		r[s].push_back(e);
	}
	dijkstra(x);
	bool check = false;
	for (int i = 1; i <= n; i++) {
		if (d[i] == k) {
			check = true;
			cout << i << "\n";
		}
	}
	if (!check)
		cout << "-1";
}
