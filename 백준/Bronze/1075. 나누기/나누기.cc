#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {

	int N, F;
	cin >> N >> F;

	int remainder = 0, NewNum = 0;
	int answer = 0;

	NewNum = (N / 100) * 100;

	for (remainder = 0; remainder < 100; remainder++) {
		if ((NewNum + remainder) % F == 0) {
			answer = remainder;
			break;
		}
	}

	cout << setfill('0') << setw(2) << answer;
	
	return 0;
}