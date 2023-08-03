#include <iostream>
#include <deque> // 덱을 만들 때 필요한 헤더 파일

using namespace std;

void executeDequeCommands(deque<int>& deq, const string& order) { // 레퍼런스를 통해 덱을 함수에 전달
    // deq라는 덱(자료구조)을 참조하는 레퍼런스를 선언(포인터와 유사)
    // 함수에서 deq를 변경하면 원래의 deq도 변경된다!
    if (order == "push_front") {
        int num = 0;
        cin >> num;
        deq.push_front(num);
    }
    else if (order == "push_back") {
        int num = 0;
        cin >> num;
        deq.push_back(num);
    }
    else if (order == "pop_front") {
        if (deq.empty()) {
            cout << "-1" << "\n";
        }
        else {
            cout << deq.front() << "\n";
            deq.pop_front();
        }
    }
    else if (order == "pop_back") {
        if (deq.empty()) {
            cout << "-1" << "\n";
        }
        else {
            cout << deq.back() << "\n";
            deq.pop_back();
        }
    }
    else if (order == "size") {
        cout << deq.size() << "\n";
    }
    else if (order == "empty") {
        if (deq.empty()) {
            cout << "1" << "\n";
        }
        else {
            cout << "0" << "\n";
        }
    }
    else if (order == "front") {
        if (deq.empty()) {
            cout << "-1" << "\n";
        }
        else {
            cout << deq.front() << "\n";
        }
    }
    else if (order == "back") {
        if (deq.empty()) {
            cout << "-1" << "\n";
        }
        else {
            cout << deq.back() << "\n";
        }
    }
}

int main() {
    int N;
    cin >> N;

    deque<int> deq;
    string order;

    for (int i = 0; i < N; i++) {
        cin >> order;
        executeDequeCommands(deq, order);
    }

    return 0;
}