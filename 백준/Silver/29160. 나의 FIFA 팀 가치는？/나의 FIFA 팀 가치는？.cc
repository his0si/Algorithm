#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
priority_queue<int> pq[12];
int n, k, i, j, p, w, t, sum;


int main() {
	FAST;
	cin >> n >> k;
	for (i = 0; i < n; i++) {
		cin >> p >> w;
		pq[p].push(w);
	}
	for (i = 0; i < k; i++) {
		for (j = 1; j <= 11; j++) {
			if (pq[j].empty()) continue;
			t = pq[j].top();
			if (t) t--;
			pq[j].pop();
			pq[j].push(t);
		}
	}
	for (j = 1; j <= 11; j++) {
		if (pq[j].empty()) continue;
		sum += pq[j].top();
	}
	cout << sum;
}