#include <iostream>
#include <algorithm>

using namespace std;

int alphabet[26];

string makePalindrome(string str) {
    for (int i = 0; i < str.size(); i++) {
        alphabet[str[i] - 'A']++; //alphabet 배열에 각 알파벳의 등장 횟수 저장
        //ex) alphabet[0]는 A의 등장 횟수
    }

    int err = 0; // 홀수개의 알파벳 개수
    int mid_idx = -1;

    for (int i = 0; i < 26; i++) {
        if (alphabet[i] > 0) {
            if (alphabet[i] % 2 == 1) { //등장한 알파벳이 홀수개 존재
                mid_idx = i;
                alphabet[i]--;
                err++;
            }
        }
    }

    // 홀수번 등장한 알파벳이 2개 이상이면 만들 수 없다.
    if (err > 1)
        return "I'm Sorry Hansoo";

    string ans = "";
    string temp = "";

    //알파벳이 1개 이상의 홀수개라면 (AAABB라면 ABABA) 사전순으로 펠린드롬을 만들어준 후
    //중간에 홀수개의 알파벳(A)를 넣어주기
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] > 0) {
            for (int j = 0; j < alphabet[i] / 2; j++) {
                ans += i + 'A';
            }
        }
    }
    temp = ans;

    reverse(temp.begin(), temp.end());
    
    if (mid_idx != -1) {
        ans += mid_idx + 'A';
    }
    ans += temp;
    return ans;
}

int main() {
    string input;
    cin >> input;

    string result = makePalindrome(input);
    cout << result;

    return 0;
}
