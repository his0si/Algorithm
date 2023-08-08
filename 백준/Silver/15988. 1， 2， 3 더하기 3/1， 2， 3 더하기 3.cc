#include <iostream>
#include <vector>

using namespace std;
const int MODULER = 1000000009; 
long long DP[1000001];  // DP 배열 선언

void sol(int N) {

    DP[1] = 1;
    DP[2] = 2;
    DP[3] = 4;

    for (int i = 4; i <= N; i++) {
        DP[i] = (DP[i - 1] + DP[i - 2] + DP[i - 3]) % MODULER; //bottom-up 구조
        //점화식 F[N] = F[N - 1] + F[N - 2] + F[N - 3]
    }

    cout << DP[N] << "\n"; 
}

int main() {
    int T, n;
    cin >> T;
    vector<int> N;

    for (int i = 0; i < T; i++) {
        cin >> n;
        N.push_back(n);
    }

    for (int i = 0; i < T; i++) {
        sol(N[i]);
    }

    return 0;
}
