#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
using namespace std;


int main(void) {

    int N, x, cycle = 0;
	cin >> N;
    x = N;//사이클 후의 새로운 수

    while (1) {

        cycle = cycle + 1;	
        x = (x % 10) * 10 + (x / 10 + x % 10) % 10;
        if (N == x) { 
            break;
        }
    }

    cout << cycle;

	return 0;
}