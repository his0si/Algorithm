from collections import deque
import sys

input=sys.stdin.readline

n,m,v=map(int,input().split())
link=[[0]*(n+1) for _ in range(n+1)] #간선을 행렬로 표현
visit=[0]*(n+1) #방문의 default값은 0; 연결되거나 지나갔을경우 1
for i in range(m):
    x,y=map(int,input().split())
    link[x][y]=link[y][x]=1 #연결 되면 1로 바꾸어 줌
    # 인접 행렬로 구현

def dfs(v):
    visit[v]=1 #만약 연결 되어 있다면
    print(v,end=' ')
    for i in range(1,n+1):
        if(visit[i]==0 and link[v][i]==1): #방문안했고, 연결되있을 시
            dfs(i)

def bfs(v):
    visit[v]=0 #dfs실행 이후 default가 1이 됨->방문하면 0으로
    q=[v]

    while q:
        v=q.pop(0) #Root Node
        # 정점을 처음 방문할 때 스택에 삽입하고, 해당 스택에서 방문할 수 있는 간선을 탐색하며 방문
        print(v,end=' ')
        for i in range(1,n+1):
            if(visit[i]==1 and link[v][i]==1): 
                q.append(i) 
                visit[i]=0 # 방문할 수 있는 간선이 더이상 존재하지 않을 때 스택에서 제거

dfs(v)
print()
bfs(v)