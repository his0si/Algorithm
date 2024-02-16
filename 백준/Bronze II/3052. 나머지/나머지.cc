#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    vector<int> num(10); 
    set<int> mod; 

    for (int i = 0; i < 10; i++) {
        cin >> num[i];
        mod.insert(num[i] % 42);
    }

    cout << mod.size();

    return 0;
}
