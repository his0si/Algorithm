#include <iostream>
#include <vector>

using namespace std;
typedef long long ll; //long long은 기니까 앞에서 typedef 선언하기

int n, m;
vector<int> A;

int main() {
    cin >> n >> m;
    A.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    ll start = 1, end = 1000000000001;
    ll total_time;
    
    //이진 탐색
    while (start < end) {
        total_time = 0;
        long long mid = start + (end - start) / 2;
        //중간값을 정수로 유지하기 위해 나눗셈의 결과가 소수점 아래로 떨어지지 않도록 이런 방식 사용

        for (int i = 0; i < n; i++) {
            total_time = total_time + mid / A[i]; //모든 스태프가 중간값 동안에 만들 수 있는 풍선의 총 개수
            //mid / A[i]는 i번째 스태프가 중간값 mid 동안에 만들 수 있는 풍선의 개수
        }

        if (total_time >= m) {//더 시간을 줄일 수 있으므로 시간 범위를 좁히는 방향으로 이진 탐색
            end = mid;
        }
        else { //목표 만큼 풍선을 만들 수 없기 때문에 시간을 늘림
            start = mid + 1;
        }
    }

    cout << end;

    return 0;
}
