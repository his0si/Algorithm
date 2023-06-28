N = int(input())
hills = list(map(int, input().split()))

result = []
max_hill = 0
cnt = 0

for i in range(N):
    if hills[i] > max_hill:
        max_hill = hills[i]
        cnt = 0
    else:
        cnt += 1
    result.append(cnt)

print(max(result))