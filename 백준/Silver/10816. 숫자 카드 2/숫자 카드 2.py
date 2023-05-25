from collections import Counter

N = int(input())
card = list(map(int, input().split()))
M = int(input())
Mcard = list(map(int, input().split()))

card_counter = Counter(card)  # 카드의 숫자를 세는 Counter 객체 생성

ans = []
for num in Mcard:
    ans.append(card_counter[num])

print(*ans)
