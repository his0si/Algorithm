#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, int m, vector<int> numbers) {
	int answer = 0;
	queue<int> q;

	//큐에 값 입력
	for (int num : numbers) { //백터의 각 요소를 "num"이라는 변수에 하나씩 할당하여 순회
		q.push(num);
	}

	//벡터 값 오름차순으로 정렬
	sort(numbers.begin(), numbers.end());

	while (true) {
		if (q.front() == numbers[numbers.size() - 1]) {//큐의 가장 앞에 있는 원소가 중요도가 가장 높은 문서일 때
			answer++;//카운트 증가
			//큐와 벡터에서 모두 해당 원소를 팝
			q.pop();
			numbers.pop_back();
			if (m == 0) {//m이 0일 때 == 원하는 원소가 큐의 가장 앞에 있을 때
				break;
			}
		}
		else {
			q.push(q.front());
			q.pop();
		}
		//원하는 원소의 위치가 0일 때 -> q의 맨 뒤로
		if (m == 0) {
			m = q.size() - 1;
		}
		else { //, 0이 아닐 때 -> -1.
			m = m - 1;
		}
	}

	return answer;
}

int main() {

	int tc;
	cin >> tc;

	for (int i = 0; i < tc; i++) {
		int n, m;
		cin >> n >> m;
        
		vector<int> numbers(n);
		
        for (int j = 0; j < n; j++) {
			cin >> numbers[j];
		}
		cout << solution(n, m, numbers) << '\n';
	}

	return 0;
}