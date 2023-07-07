N=int(input())
grade=list(map(int, input().split()))

M=max(grade)

newGrade=[0]*N #리스트 초기화
newSum=0

for i in range(N):
    newGrade[i]=grade[i]/M*100
    newSum+=newGrade[i]

result=newSum/N
print(result)