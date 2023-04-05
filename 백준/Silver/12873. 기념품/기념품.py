import sys
from collections import deque

n = int(sys.stdin.readline())
participants = deque([i for i in range(1,n+1) ])
#원으로 앉아 있으니까 원형큐?

t = 1 #횟수

for i in range(n-1): #한명이 남으려면 항상 인원수-1번째까지 해야함.
    #몇번째 사람이 탈락하는지 구하기
    number = (t**3) % len(participants)
    # 첫번째 사람이 탈락하면 배열의 값을 바꿀 필요가 없다.
    if number == 1:
        participants.popleft()
    
    else:    
        participants.rotate(-(number-1)) #첫번째 사람이 탈락하는게 아니라면
    #number-1번째 사람이 탈락한다. (나머지가 2면 두번째 사람, 나머지가 3이면 세번째 사람 탈락)    
    #왼쪽(시작하는 쪽)에서 number-1번째 사람이 탈락해야하므로 매개변수를 음수로 넣어준다.  

        participants.popleft()
      
    t = t + 1

print(*participants) #큐,덱을 쓸 때는 *쓰는 거 잊지 말기

'''
deque.rotate()를 사용해서 리스트 회전하기
리스트 자료형을 deque자료형으로 바꾼후 rotate()함수를 이용하면 된다. 함수안에 음수를 넣게 된다면 왼쪽회전 양수는 오른쪽회전이다.

>>> from collections import deque
>>> test = [1, 2, 3, 4, 5, 6, 7, 8, 9]
>>> test = deque(test)
>>> test.rotate(2) 
>>> result = list(test)
>>> result
[8, 9, 1, 2, 3, 4, 5, 6, 7]
위 결과를 보게되면 rotate(2)를 함으로 오른쪽으로 2만큼 회전한것을 볼 수 있다.
'''
