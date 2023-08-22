#include <iostream>
#include <vector>

using namespace std;

int N, M;
int cnt = 0;
int result;
vector<int> A;

int main() {
	cin >> N >> M;
	A.resize(N);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            result += A[j];

            if (result == M) {
                cnt++;
                result = 0;
                break;
            }
        }
        if (result != 0) 
            result = 0;
    }

    cout << cnt;
	return 0;
}