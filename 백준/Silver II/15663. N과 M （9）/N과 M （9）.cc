#include <iostream>
#include <algorithm>

using namespace std;

int n, m;

int arr[10];
int num[10];
int check[10]; // 중복으로 사용한 num배열의 값들이 있는지 확인하여 중복으로 사용된 값 제거

void seq(int len) {
    if (len == m) {
        for (int i = 0; i < m; i++)
            cout << arr[i] << " ";
        printf("\n");
        return;
    }

    int last = 0;

    for (int i = 0; i < n; i++) {
        if (check[i] == 0 && num[i] != last) {
            arr[len] = num[i];
            last = num[i]; // last를 현재 값으로 업데이트
            check[i] = 1;
            seq(len + 1);
            check[i] = 0;
        }
    }

    return;
}

int main() {
    cin >> n >> m; 

    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    sort(num, num + n);

    seq(0);

    return 0;
}