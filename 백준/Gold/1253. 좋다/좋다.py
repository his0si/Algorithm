# 투포인터를 사용한 문제 풀이
import sys
input = sys.stdin.readline

N = int(input())
numList = list(map(int , input().split()))
numList.sort()
cnt =0

for k in range(N):
    target = numList[k] #좋은 수
    i = 0
    j = N-1
    while i<j:
        sum = numList[i] + numList[j]
        if sum < target: #target값 보다 모자르면 왼쪽 포인터를 오른쪽으로 움직여서 합 늘리기
            i+=1
        elif sum > target: #target값을 넘어가면 오른 쪽 포인터를 왼쪽으로 움직여서 합 줄이기
            j-=1
        else:
            if (i!=k) & (j!=k) : 
                cnt+=1
                break
            if i == k: # 합을 만드는데 사용된 원소들이 target 자체와 같은 경우에는 바로 위에 경우와 중복 계산이 되기 때문에 개수를 더하지 않고 건너 뛰어야 함
                i+=1 
            elif j == k:
                j-=1
print(cnt)