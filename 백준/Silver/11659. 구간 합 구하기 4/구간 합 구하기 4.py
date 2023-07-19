import sys
input = sys.stdin.readline
 
m, n = map(int, input().split())
numList = list(map(int, input().split()))
prefix_sum = [0]    # init prefix_sum    
 
temp = 0    
for i in numList: 
    temp += i
    prefix_sum.append(temp) # 각각의 합들을 새로운 배열에 저장해뒀다가
 
for i in range(n):
    a, b = map(int, input().split())
    print(prefix_sum[b] - prefix_sum[a-1]) #나중에 입력에 구간이 들어오면 해당 구간을 index로 바꿔서 출력


''' 가장 처음 시도해봤던 방법, 출력은 제대로 되나 시간초과가 뜬다
import sys
input = sys.stdin.readline

N, M = map(int, input().split())
numList = list(map(int, input().split()))
result=[]

for _ in range(M):
    i, j = map(int, input().split())
    result.append(sum(numList[i-1:j])) #numList에서 인덱스 i-1부터 j-1까지의 부분을 슬라이싱

print(result)
'''