T = int(input())
button = [300, 60, 10]  # A, B, C 버튼의 시간 설정
count = [0, 0, 0]  # 각 버튼을 누른 횟수

for i in range(3):
    count[i] = count[i] + T // button[i]  # 가장 긴 시간을 누를 때의 횟수 계산
    T = T % button[i]  # 남은 시간 계산

#반복문으로 버튼 B랑 C도 동일

if T != 0:
    print("-1") 
else:
    print(count[0], count[1], count[2])
