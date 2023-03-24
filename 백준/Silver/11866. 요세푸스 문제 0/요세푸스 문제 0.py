import sys
input=sys.stdin.readline

n,k=map(int,input().split())
people=[]

for i in range(1,n+1):
    people.append(i)

#입력값을 리스트에 추가

result=[]
index=k-1

while people:
    #k번째 index 제거
    result.append(people.pop(index))
    #index 값 갱신 (리스트 길이 감소->%연산)
    if people:
        index=(index+k-1)%len(people)

print('<',end='')

for i in range(n):
    if i==n-1:
        print(result[i],end='>')
    else:
        print(result[i],end=', ')

#파이썬에서 리스트(list)는 C++이나 자바의 배열(array)과 비슷한 데이터 구조
# 하지만 리스트는 배열과 달리 크기가 가변적이며, 다양한 데이터 타입을 포함할 수 있다.