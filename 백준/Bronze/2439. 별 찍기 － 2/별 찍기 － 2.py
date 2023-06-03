N = int(input())

for i in range(1, N+1):
    spaces = " " * (N - i)  # 해당 줄의 앞에 추가할 공백 생성
    stars = "*" * i  # 해당 줄에 출력될 별 생성
    print(spaces + stars)  # 공백과 별을 합쳐서 출력
