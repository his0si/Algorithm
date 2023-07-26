#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> input;
    int num;

    for (int i = 0; i < 8; i++) {
        cin >> num;
        input.push_back(num);
    }

    bool isAscending = true;
    for (int i = 0; i < 7; i++) {
        if (input[i] + 1 != input[i + 1]) {
            isAscending = false;
            break;
        }
    }

    bool isDescending = true;
    for (int i = 0; i < 7; i++) {
        if (input[i] - 1 != input[i + 1]) {
            isDescending = false;
            break;
        }
    }

    if (isAscending) {
        cout << "ascending";
    }
    else if (isDescending) {
        cout << "descending";
    }
    else {
        cout << "mixed";
    }

    return 0;
}