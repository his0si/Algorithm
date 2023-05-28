T = int(input())

for _ in range(T):
    R, S = input().split()  # 반복 횟수 R과 문자열 S 입력
    R = int(R)  # R을 정수로 변환

    result = ''
    for i in S:
        result = result + i * R  # 문자를 R번 반복하여 결과 문자열에 추가

    print(result)
