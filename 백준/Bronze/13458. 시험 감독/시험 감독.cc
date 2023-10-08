#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int n; 
    cin >> n;

	vector<int> list(n);
    
	for (int i = 0; i < n; i++) 
        cin >> list[i];

	int b, c;
	cin >> b >> c;

	long long result = n;
	for (auto& l : list)
	{
		l = l - b;
		if (l <= 0) 
            continue;
		l = ceil(l / (float)c);
		result += l;
	}

	cout << result;

	return 0;
}
