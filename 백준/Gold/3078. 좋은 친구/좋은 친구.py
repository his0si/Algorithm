#큐
import sys
input=sys.stdin.readline

n,k=map(int,input().split())
pair=[0]*21
result=0
people=[0]*n

#n번 반복
#이름을 입력받을 때마다 해당 이름을 기준으로 몇 쌍이나 가능한지 구해서 더함
#조건 1) 등수차가 k이하(인덱스 차이 k 이하)  2) 이름 길이 동일

for i in range(n):
    #이름길이 저장
    name=len(input().rstrip())
    people[i]=name
    
    #등수 차이 k초과면 pair에서 빼주기
    if i>k:
        pair[people[i-k-1]]-=1
    #해당 이름 길이에 대한 쌍 더하기
    result+=pair[name] 
    #자기 자신
    pair[name]+=1  
    
print(result)