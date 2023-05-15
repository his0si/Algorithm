import sys
input=sys.stdin.readline

n=int(input())
link=[[0]*3 for _ in range(26)] #알파벳 개수(N(1 ≤ N ≤ 26))

for i in range(n):
    root,left,right=map(str,input().split()) #부모, 왼쪽 자식, 오른쪽 자식

    me=ord(root)-ord('A') # 문자로 입력 받았으니 이걸 인덱스와 맞춰서 편하게 만들어주자(ord('a')=97)
    # 이렇게 하면 A부터 0, B부터 1, ..., Z부터 25까지의 인덱스를 얻을 수 있음
    link[me][0]=root; link[me][1]=left; link[me][2]=right
    # 3*N의 행렬로 만들기

def preorder(node): # 전위 순회(preorder traversal)
    #루트 → 왼쪽 → 오른쪽
    print(node,end='') #루트 노드
    if (link[ord(node)-65][1]!='.'): #왼쪽 자식이 있는 경우
        preorder(link[ord(node)-65][1]) #왼쪽 자식 노드를 방문
    if (link[ord(node)-65][2]!='.'): #오른쪽 자식이 있는 경우
        preorder(link[ord(node)-65][2]) #오른쪽 자식 노드를 방문

def inorder(node): # 중위 순회(inorder traversal)
    #왼쪽 → 루트 → 오른쪽
    if(link[ord(node)-65][1]!='.'): #왼쪽 자식이 있는 경우
        inorder(link[ord(node)-65][1]) #왼쪽 자식 노드를 방문
    print(node,end='') #루트 노드
    if(link[ord(node)-65][2]!='.'): #오른쪽 자식이 있는 경우
        inorder(link[ord(node)-65][2]) #오른쪽 자식 노드를 방문

def postorder(node): # 후위 순회(postorder traversal)
    #오른쪽 → 왼쪽 → 루트
    if(link[ord(node)-65][1]!='.'): #왼쪽 자식이 있는 경우
        postorder(link[ord(node)-65][1]) #왼쪽 자식 노드를 방문
    if(link[ord(node)-65][2]!='.'): #오른쪽 자식이 있는 경우
        postorder(link[ord(node)-65][2]) #오른쪽 자식 노드를 방문
    print(node,end='') #루트 노드

preorder('A')
print()
inorder('A')
print()
postorder('A')