N = int(input())
word = []
result = 0

for _ in range(N):
    word.append(input())
# append() 함수는 괄호 안에 값을 전달하여 리스트에 원소를 추가해야 함

for w in word:
    prev_char = '' #변수 초기화
    char_set = set() #빈 집합
    # set(): 집합은 중복되지 않은 원소들의 모임을 나타내는 자료구조로 리스트와 다르게 순서가 없다

    for char in w:
        if char != prev_char:  # 현재 문자가 이전 문자와 다를 때
            if char in char_set:  # 이미 등장한 문자인 경우
                break
            char_set.add(char)
            prev_char = char
    else:  # for문이 중간에 break 되지 않고 끝까지 수행된 경우
        result += 1

print(result)