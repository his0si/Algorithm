from collections import Counter
# Counter 클래스는 collections 모듈에서 제공
# 입력된 순서대로 요소를 카운트하고 딕셔너리 형태로 반환한다
# 이를 활용하여 각 숫자 카드의 개수를 세는데 활용 가능

N = int(input())
card = list(map(int, input().split()))
M = int(input())
Mcard = list(map(int, input().split()))

card_counter = Counter(card)  # 카드의 숫자를 세는 Counter 객체 생성

ans = []
for num in Mcard:
    ans.append(card_counter[num])

print(*ans) # ans 리스트의 요소들을 공백으로 구분하여 출력
