N=int(input())

for _ in range(N):
    Quiz = list(input())
    score = 0  
    result = 0  # 새로운 Quiz를 입력 받으면 점수 합계를 리셋
    for i in Quiz:
        if i == 'O':
            score = score + 1  # 'O'가 연속되면 점수가 1점씩 커진다.
            result = result + score  # 현재까지의 점수를 결과에 누적
        else:
            score = 0
    print(result) # 해당 테스트 케이스의 점수 출력
