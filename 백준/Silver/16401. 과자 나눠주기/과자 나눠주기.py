M, N = map(int, input().split())
cookies = list(map(int, input().split()))


def binary_search(cookies, length):
    count = 0
    for cookie in cookies:
        count = count + cookie // length
    return count
    
cookies.sort()

start = 1
end = cookies[-1]

result = 0

while start <= end:
    mid = (start + end) // 2
    count = binary_search(cookies, mid)
    
    if count >= M:
        result = mid
        start = mid + 1
    else:
        end = mid - 1

print(result)
