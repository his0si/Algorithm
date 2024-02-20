#include <iostream>
#include <stack>

using namespace std;

int solution(string& str) {
	stack<char> stk;
	int answer = 0;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(') {// 여는 괄호인 경우, stack에 push
			stk.push('(');
		}
		else {//닫힌 괄호인 경우
			stk.pop();
			if (str[i - 1] == '(') {// 이전 문자가 '('라면 레이저
				answer += stk.size();// 레이저이면 stack size만큼 더하기
			}
			else {// 이전 문자가 ')'라면 쇠막대기의 끝
				answer++;// 쇠막대기의 끝이면 +1
			}
		}
	}
	return answer;

}

int main() {
	string str;
	cin >> str;

	int answer = solution(str);
	cout << answer;

	return 0;
}