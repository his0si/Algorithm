#include <iostream>
#include <queue> // 큐를 만들 때 필요한 헤더 파일

using namespace std;

void executeQueueCommands(queue<int>& que, const string& order) { // 레퍼런스를 통해 큐를 함수에 전달
    // que라는 큐(자료구조)을 참조하는 레퍼런스를 선언(포인터와 유사)
    // 함수에서 que를 변경하면 원래의 que도 변경된다!
    if (order == "push") {
        int num = 0;
        cin >> num;
        que.push(num);
    }
    else if (order == "pop") {
        if (que.empty()) {
            cout << "-1" << "\n";
        }
        else {
            cout << que.front() << "\n";
            que.pop();
        }
    }
    else if (order == "size") {
        cout << que.size() << "\n";
    }
    else if (order == "empty") {
        if (que.empty()) {
            cout << "1" << "\n";
        }
        else {
            cout << "0" << "\n";
        }
    }
    else if (order == "front") {
        if (que.empty()) {
            cout << "-1" << "\n";
        }
        else {
            cout << que.front() << "\n";
        }
    }
    else if (order == "back") {
        if (que.empty()) {
            cout << "-1" << "\n";
        }
        else {
            cout << que.back() << "\n";
        }
    }
}

int main() {
    int N;
    cin >> N;

    queue<int> que;
    string order;

    for (int i = 0; i < N; i++) {
        cin >> order;
        executeQueueCommands(que, order);
    }

    return 0;
}