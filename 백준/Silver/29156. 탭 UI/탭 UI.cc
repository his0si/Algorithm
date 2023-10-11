#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
using namespace std;
ll n, i, tab[100002], q, cl;
ll tabsum[100002];
double pos, l;

int main() {
	FAST;
	cin >> n;
	for (i = 1; i <= n; i++) {
		cin >> tab[i];
		tabsum[i] = tab[i] + tabsum[i - 1];
	}
	cin >> l >> q;
	for (i = 0; i < q; i++) {
		cin >> cl;
		pos = tabsum[cl - 1] + tab[cl] / 2.0 - l / 2.0;
		if (pos > tabsum[n] - l) pos = tabsum[n] - l;
		if (pos < 0) pos = 0;
		
		pos *= 100;
		pos = floor(pos);
		pos /= 100;

		cout << fixed;
		cout.precision(2);
		cout << pos << '\n';
	}

}