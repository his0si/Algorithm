#오일러피 함수
#1부터 N까지의 범위에서 N과 서로소인 자연수의 개수
import math

N=int(input())
ans = N

for i in range(2, int(math.sqrt(N)) + 1): #에라토스테네스의 체와 원리가 비슷
    if N % i == 0: #i가 소인수인지 확인
        while N % i == 0: 
            N = N // i
        # 오일러 피 함수 
        ans = ans * (1-1/i)

# 자기 자신이 소수였던 경우(반복문에서 제곱근까지만 탐색했으므로)
if N>1:
    ans = ans * (1-1/N)

print(int(ans))