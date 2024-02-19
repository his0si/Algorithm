#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(string a, string b) {
    int lengthA = a.size();
    int lengthB = b.size();
    int sumA = 0;
    int sumB = 0;

    if (lengthA != lengthB) {
        return lengthA < lengthB;
    }

    for (int i = 0; i < lengthA; i++) {
        if (a[i] >= '0' && a[i] <= '9') {
            sumA += (a[i] - '0');
        }
        if (b[i] >= '0' && b[i] <= '9') {
            sumB += (b[i] - '0');
        }
    }

    if (sumA != sumB) {
        return sumA < sumB;
    }

    return a < b;
}

int main() {
    int n;
    cin >> n;

    vector<string> serial(n);

    for (int j = 0; j < n; j++) {
        cin >> serial[j];
    }

    sort(serial.begin(), serial.end(), cmp);

    for (int j = 0; j < n; j++) {
        cout << serial[j] << "\n";
    }

    return 0;
}
