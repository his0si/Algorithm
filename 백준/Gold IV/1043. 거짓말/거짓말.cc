#include <iostream>
#include <vector>
using namespace std;
const int MAX = 51;

int Find(int node, int parent[]) {
	if (parent[node] == -1) {
		return node;
	}
	return Find(parent[node], parent);
}

void Union(int x, int y,bool knowsTruth[],int parent[]) {
	x = Find(x,parent);
	y = Find(y,parent);

	if (x == y) {
		return; // 이미 같은 그룹에 속해있음
	}
	//진실을 아는 대표를 부모로 삼기
	if (knowsTruth[x]) {
		parent[y] = x;
	}
	else if (knowsTruth[y]) {
		parent[x] = y;
	}
	else { 	//둘 다 진실을 모르는 경우 
		parent[x] = y; // 또는 parent[y] = x
	}
}

int countGroups(int m, vector<vector<int>> party, bool knowsTruth[],int parent[]) {
	int cnt = 0;
	for (int i = 0; i < m; i++) {
		int r = Find(party[i][0],parent);
		if (!knowsTruth[r]) { 
			cnt++;
		}
	}
	return cnt;
}

int solution(int n, int m, vector<int> truth, vector<vector<int>> party) {
  int parent[MAX] = { -1, };
  bool knowsTruth[MAX] = { false, };  

	//정점들의 부모를 -1로 초기화
	for (int i = 1; i <= n; i++) {
		parent[i] = -1;
	}

	//진실을 아는 사람 표시
	for (int i : truth) {
		knowsTruth[i] = true;
	}

	// 각 파티마다 정점들끼리 Union 연산 
	for (int i = 0; i < m; i++) {
		int fp = party[i][0];
		for (int p : party[i]) {
			Union(fp, p, knowsTruth, parent);
		}
	}
	return countGroups(m, party,knowsTruth, parent);
}

int main() {
	int n, m, init;
	//입력
	cin >> n >> m >> init;
	vector<int> truth;
	vector<vector<int>> party(m);

	while (init--) { 
		int p; cin >> p;
		truth.push_back(p);
	}
	for (int i = 0; i < m; i++) {
		int sz; cin >> sz;
		while (sz--) {
			int x; cin >> x;
			party[i].push_back(x);
		}
	}
	//연산 & 출력
	cout << solution(n, m, truth, party);

	return 0;
}