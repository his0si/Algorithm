#include <iostream>
#include <vector>
#include <algorithm> //sort함수를 위해 필요

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> numbers(N);
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());
    //백터의 경우 sort 함수를 사용할 때 begin()과 end()함수를 이용
    //배열의 경우 sort(arr, arr+10, desc) 시작지점, 종료 지점, 증감(기본은 오름차순)

    for (int i = 0; i < N; ++i) {
        cout << numbers[i] << endl;
    }

    return 0;
}