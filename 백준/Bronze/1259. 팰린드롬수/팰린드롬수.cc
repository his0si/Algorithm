#include <iostream>

using namespace std;

bool isPalindrome(string s) {
    int length = s.length();
    for (int i = 0; i < length / 2; i++) {
        if (s[i] != s[length - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    while (true) {
        string input;
        cin >> input;
        
        if (input == "0") {
            break;
        }
        
        if (isPalindrome(input)) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}
