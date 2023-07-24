#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> a, b; // 2차원 벡터 선언
int N, M;

int main() {
    cin >> N >> M;

    // 2차원 벡터 크기 초기화, 초기화 안 할시 오류 남
    a.resize(N, vector<int>(M));
    b.resize(N, vector<int>(M));

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> a[i][j];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> b[i][j];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
            cout << a[i][j] + b[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}
