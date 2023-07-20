N = int(input())
M = int(input())
numList = list(map(int, input().split()))
count = 0

numList.sort()

i = 0  # 왼쪽 포인터
j = N - 1  # 오른쪽 포인터

while i < j:
    if numList[i] + numList[j] < M: #M이 안되면 왼쪽 포인터를 오른쪽으로 움직여서 합 늘리기
        i += 1
    elif numList[i] + numList[j] > M: #M를 넘어가면 오른 쪽 포인터를 왼쪽으로 움직여서 합 줄이기
        j -= 1
    else:
        count += 1
        i += 1
        j -= 1

print(count)