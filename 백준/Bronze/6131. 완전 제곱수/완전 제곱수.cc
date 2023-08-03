#include <iostream>

using namespace std;

int main() {
	int N,result=0;
	cin >> N;

    for (int i = 1; i <= 500; i++){//B
        for (int j = i; j <= 500; j++){//A
            if (j * j == i * i + N)
                result++;
        }
    }
    cout << result;
	return 0;
}