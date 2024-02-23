#include <iostream>
#include <queue>

using namespace std;

void jp(queue<int> Q, int k) { 
    while (Q.size() > 1) {
        for (int i = 1; i < k; i++) {
            int tmp = Q.front();
            Q.pop();
            Q.push(tmp);
        }
        cout << Q.front() << ", ";
        Q.pop();
    }
    cout << Q.front() << ">";
}

int main() {
    int N, K;
    queue<int> q;

    cin >> N >> K;

    for (int i = 1; i <= N; ++i) {
        q.push(i);
    }

    cout << "<";

    jp(q, K);

    return 0;
}
