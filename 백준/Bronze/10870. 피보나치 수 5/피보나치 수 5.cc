#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
using namespace std;

int sequence(int n) {

    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    return sequence(n - 1) + sequence(n - 2);
}
int main(void) {

    int n;
    cin >> n;
    cout << sequence(n);
    
}