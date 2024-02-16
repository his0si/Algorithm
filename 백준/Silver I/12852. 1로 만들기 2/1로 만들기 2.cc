#include <iostream>
#include <vector>

using namespace std;
typedef pair<int, int> ci; //pair를 ci로 재정의해 코드에서 간단하게 표현

/**최소 횟수의 연산 결과 반환*/
vector<ci> calculate(int n) {
    vector<ci> dp(n + 1); //first:연산 최소 횟수 second:연산 결과
    dp[1] = {0, 0};

    for (int i = 2; i <= n; i++) {
        //case 3: 1을 뺀다
        //3번째 조건은 언제나 가능하므로 dp[i]를 3번째 조건으로 초기화
        dp[i] = {dp[i - 1].first + 1, i - 1};

        //case 2: X가 2로 나누어 떨어지면, 2로 나눈다
        //위에서 초기화한 dp[i]보다 2번째 조건일 때 값이 더 작을 때만 갱신
        if (i % 2 == 0 && dp[i / 2].first < dp[i].first) {
            dp[i] = {dp[i / 2].first + 1, i / 2};
        }

        //case 1: X가 3으로 나누어 떨어지면, 3으로 나눈다.
        //위에서 초기화한 dp[i]보다 1번째 조건일 때 값이 더 작을 때만 갱신
        if (i % 3 == 0 && dp[i / 3].first < dp[i].first) {
            dp[i] = {dp[i / 3].first + 1, i / 3};
        }
    }
    return dp;
}
vector<int> solution(int n) {
    vector<ci> dp = calculate(n);
    vector<int> result;   //연산 순서 저장

    int tmp = n;
    while (tmp != 0) {
        result.push_back(tmp);
        tmp = dp[tmp].second;
    }
    return result;
}
int main() {
  
    int n;
    cin >> n;
    
    vector<int> result = solution(n);

    cout << result.size() - 1 << "\n"; //연산 횟수
    for (int x : result) {
        cout << x << " ";
    }
    return 0;
}