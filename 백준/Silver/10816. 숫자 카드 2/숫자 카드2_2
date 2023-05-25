#시간 초과
import sys
input = sys.stdin.readline

N = int(input())
card = list(map(int, sys.stdin.readline().split()))
M = int(input())
Mcard = list(map(int, sys.stdin.readline().split()))
ans = [0] * M  # ans 리스트 초기화

card.sort()  # card 리스트 정렬(리스트 내장 함수)

def binary_search(target, left, right):
    while left <= right:
        mid = (left + right) // 2  # 중간 인덱스 계산
        if card[mid] == target:  # 타깃 카드 발견
            return True
        elif card[mid] < target:  # 중간 값이 타겟 카드보다 작을 경우
            left = mid + 1  # 오른쪽 부분 탐색
        else:
            right = mid - 1  # 왼쪽 부분 탐색
    return False

for i in range(M):
    if binary_search(Mcard[i], 0, N - 1):
        ans[i] = card.count(Mcard[i])  # 해당 숫자의 개수를 세서 저장

print(*ans)  # ans 리스트의 요소들을 공백으로 구분하여 출력
