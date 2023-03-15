#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
using namespace std;


int main(void) {

	int year;
	int x;

	cin >> year;//1<=year<=4000
	
	x = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	
	cout << x;

	return 0;
}