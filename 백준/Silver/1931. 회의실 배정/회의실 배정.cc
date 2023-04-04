#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> meetings;
    int result = 0;

    for (int i = 0; i < N; i++) {
        int start, end;
        cin >> start >> end;
        meetings.push_back(make_pair(end, start)); // 각 회의의 끝나는 시간을 기준으로 정렬하기 위해 (end, start) 형태로 저장
    }

    sort(meetings.begin(), meetings.end()); // 끝나는 시간을 기준으로 정렬

    int end_time = 0; // 이전 회의의 끝나는 시간

    for (auto meeting : meetings) {
        if (meeting.second >= end_time) { // 이전 회의가 끝난 이후에 시작하는 회의일 경우에만 참석 가능
            result = result + 1;
            end_time = meeting.first; // 현재 회의가 끝나는 시간을 저장하여 다음 회의와 비교할 때 사용
        }
    }

    cout << result << endl;

    return 0;
}
