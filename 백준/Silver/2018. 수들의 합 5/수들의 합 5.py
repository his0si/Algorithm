#투 포인터
n = int(input())
cnt,sum = 0,0
start, end = 0,0

while end<=n: #end가 n보다 커졌다면 범위를 넘은 것이므로 종료
    #두 개의 포인터를 이동하면서 연속된 자연수의 범위를 조정해 나감
    if sum < n:
        end += 1
        sum += end
    elif sum > n:
        sum -= start
        start += 1
    else: 
        cnt += 1 #sum=n이라면 성공적인 조합이므로 카운트
        end += 1
        sum += end
print(cnt)