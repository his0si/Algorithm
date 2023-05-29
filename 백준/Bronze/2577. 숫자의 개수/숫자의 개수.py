A = int(input()) #각각 다른 줄에 입력 받는 것이므로 그냥 3번 입력 받기
B = int(input())
C = int(input())
# A,B,C = map(int, input().split()) 이거는 공백을 구분으로 입력 받을 때 사용!

num = list(str(A*B*C))
# str함수를 이용하여 문자열로 변환하고, list를 이용하여 각각의 문자를 요소로 가지는 리스트로 변환한다.
# list() 함수는 문자열을 리스트로 변환할 때, 문자열의 각 문자를 개별적인 요소로 가지는 리스트를 생성한다.

for i in range(10):
    print(num.count(str(i))) # count 함수를 사용해서 그 리스트에 문자가 몇 개씩 있는지 print해준다.