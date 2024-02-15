#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> stairs(N);

    for (int i = 0; i < N; ++i) {
        cin >> stairs[i];
    }

    vector<int> dp(N, 0);

    if (stairs.size() <= 2) {
        int sum = 0;
        for (int i = 0; i < N; ++i) {
            sum += stairs[i];
        }
        cout << sum << "\n";
    } else {
        dp[0] = stairs[0];
        dp[1] = stairs[0] + stairs[1];
        for (int i = 2; i < N; ++i) {
            dp[i] = max(dp[i - 3] + stairs[i - 1] + stairs[i], dp[i - 2] + stairs[i]);
        }
        cout << dp[N - 1] << "\n";
    }

    return 0;
}