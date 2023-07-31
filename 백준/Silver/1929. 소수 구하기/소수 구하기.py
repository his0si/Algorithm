#에라토스테네스의 체
import math

def isPrime(num):
    if num < 2:
        return False
    for i in range(2, int(math.sqrt(num)) + 1):
        if num % i == 0: #for문을 돌면서 하나라도 나눠지는 수가 있다면
            return False #소수가 아님
    return True

M, N = map(int, input().split())

for i in range(M, N + 1):
    if isPrime(i):
        print(i)