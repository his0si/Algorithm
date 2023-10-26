//그냥 재귀로 하면 fibonacci 함수의 중복 호출이 많아져 시간 초과
#include <iostream>

using namespace std;

pair<int, int> dp[41]; 

void countFibo(int n)
{
	dp[0] = make_pair(1, 0);
	dp[1] = make_pair(0, 1); 

	for (int i = 2; i <= n; i++) {
		dp[i] = make_pair((dp[i - 1].first + dp[i - 2].first),
			(dp[i - 1].second + dp[i - 2].second));
	}
}

int main()
{
	int T, n;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> n; 
		countFibo(n); 
		cout << dp[n].first << ' ' << dp[n].second << '\n'; 
	}

	return 0;
}
