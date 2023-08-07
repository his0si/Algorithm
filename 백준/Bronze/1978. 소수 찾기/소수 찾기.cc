#include <iostream>
#include <cmath> //sqrt함수

using namespace std;

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) { //에라토스테네스의 체
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    int cnt = 0;
    for (int i = 0; i < N; i++) {
        int N;
        cin >> N;
        if (isPrime(N)) {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}
