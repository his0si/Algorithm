#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool function(const string& input) {
    stack<char> stk;
    for (char c : input) {
        if (c == '(' || c == '[') {
            stk.push(c);
        }else if (c == ')') {
            if (!stk.empty() && stk.top() == '(') {
                //')'가 나올 때는 스택이 비어있지 않고 스택의 top이 '('와 짝을 이루면 pop 
                stk.pop();
            }else {
                return false;
                //균형 잡힌 문자열이 아니므로 더 이상의 검사를 진행하지 않고 함수를 종료
            }
        }else if (c == ']') {
            if (!stk.empty() && stk.top() == '[') {
                stk.pop();
            }else {
                return false;
            }
        }
    }
    return stk.empty();
}

int main() {
    while (true) {
        string input;
        getline(cin, input);
        //세 번째 인자를 지정해주면 그 제한자 문자 직전까지 읽어서 input에 저장
        //세 번째 인자는 별도로 지정해주지 않으면 엔터(\n)로 인식

        if (input == ".") {
            break;
        }

        if (function(input)) {
            cout << "yes" << "\n";
        }
        else {
            cout << "no" << "\n";
        }
    }

    return 0;
}
