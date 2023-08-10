#include <iostream>
#include <cmath>

using namespace std;

int main() {
    unsigned long long n; //오버플로우 방지
    cin >> n;

    unsigned long long q = (unsigned long long)(sqrt(n));//정수형으로 명시적 형변환

    while (q * q < n) {
        q++;
    }

    cout << q;
    
    return 0;
}