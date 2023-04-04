input = int(input())
change = [500,100,50,10,5,1]  # 500,100,50,10,5,1 거스름돈 종류
count = 0 # 거스름돈의 개수

ChangeTotal=1000-input

for i in range(6):
    count = count + ChangeTotal // change[i]  # 큰 거스름돈부터 내림차순
    ChangeTotal = ChangeTotal % change[i]  # 500으로 거슬러 주고 남은 돈

#반복문으로 모든 거스름돈 똑같이 계산

print(count)
