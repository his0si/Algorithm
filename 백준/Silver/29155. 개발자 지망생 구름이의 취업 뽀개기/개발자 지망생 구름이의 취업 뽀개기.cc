#include <bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>, greater<int>> pq[6];
vector<int> mun[6];
int n, i, j, p[6], k, t, sum;

int main() {
	cin >> n;
	for (i = 1; i <= 5; i++) cin >> p[i];
	
	for (i = 0; i < n; i++) {
		cin >> k >> t;
		pq[k].push(t);
	}

	for (i = 1; i <= 5; i++) {
		for (j = 1; j < p[i]; j++) {
			pq[i].pop();
			sum += pq[i].top();
		}
		sum += pq[i].top();
	}

	cout << sum + 240;

}
