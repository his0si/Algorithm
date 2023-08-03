#include <iostream>

using namespace std;

int gcd(int a, int b) {
	int c = a % b;
	while (c != 0) { //유클리드 호제법
		a = b;
		b = c;
		c = a % b;
	}
	return b; //MOD연산(나머지 연산)의 결괏값이 0이 나오면 그 연산의 작은 수를 최대 공약수로 선택
}

int lcm(int a, int b) {
	return (a * b) / gcd(a, b);//최소 공배수는 두 수의 곱을 최대 공약수로 나눈 값
}

int main() {
	int n1, n2;
	cin >> n1 >> n2;

	cout << gcd(n1, n2) << "\n";
	cout << lcm(n1, n2) << "\n";
}