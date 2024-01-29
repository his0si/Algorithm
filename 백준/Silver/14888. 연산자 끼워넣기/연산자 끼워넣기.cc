#include <iostream>

using namespace std;

int N;
int operands[11]; // 수열 
int operators[4]; // 연산자의 개수
int min_i = 1000000001;
int max_i = -1000000001;

void sequence(int result, int idx)
{
    if(idx == N)
    {
        if(result > max_i)
            max_i = result;
        if(result < min_i)
            min_i = result;
        return;
    }
    for(int i = 0; i < 4; i++)
    {
        if(operators[i] > 0)
        {
            operators[i]--; // 연산자 하나 사용했으므로 1개 줄여줌
            if(i == 0)
                sequence(result + operands[idx], idx+1);
            else if(i == 1)
                sequence(result - operands[idx], idx+1);
            else if(i == 2)
                sequence(result * operands[idx], idx+1);
            else
                sequence(result / operands[idx], idx+1);
            operators[i]++; // 다른 연산자를 사용할 것이므로 아까 줄였던 연산자 개수 늘려줌
        }
    }
    return;
}
int main() {
    cin >> N;
    
    for(int i = 0; i < N; i++)
        cin >> operands[i];
    
    for(int i = 0; i < 4; i++)
        cin >> operators[i];
    
    sequence(operands[0],1);
    
    cout << max_i << '\n';
    cout << min_i;
}