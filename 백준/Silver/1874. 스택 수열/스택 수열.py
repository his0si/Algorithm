def stack_fuction(n, numList):
    stack = []
    result = []

    current_num = 1  # 1부터 시작하여 스택에 순차적으로 push하기 위한 변수
    for num in numList:
        # 현재 숫자가 주어진 수(num)보다 작거나 같을 때까지 스택에 push
        while current_num <= num:
            stack.append(current_num)
            result.append("+")
            current_num += 1

        # 스택의 가장 위에 있는 숫자와 주어진 수(num)를 비교하여 pop 여부를 결정
        if stack[-1] == num: # 인덱싱을 음수로 하면, 리스트의 끝에서부터 요소를 가져올 수 있음
            stack.pop()
            result.append("-")
        else:
            print("NO")
            return

    for i in result:
        print(i)

N = int(input())
numList = [int(input()) for _ in range(N)]

stack_fuction(N, numList)