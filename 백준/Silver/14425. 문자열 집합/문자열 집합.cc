#include <iostream>
#include <set> 
#include <string>

using namespace std;

int cmp(const set<string>& S, int M) { 
    int cnt = 0;

    for (int i = 0; i < M; i++) {
        string str;
        cin >> str;
        if (S.count(str)) { //set S에서 문자열 str이 몇 번 등장하는지를 반환하는 count 함수 호출
            // set은 중복된 원소가 삽입되지 않으므로 count로 원소 개수를 구하여도 0또는 1
            cnt++;
        }
    }

    return cnt; 
}

int main() {
    int N, M;
    set<string> S;

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;
        S.insert(str); // Set은 인덱스로 직접 접근할 수 없기 때문에 백터처럼 cin >> S[i]; 불가
    }

    int res = cmp(S, M); 

    cout << res;

    return 0;
}
