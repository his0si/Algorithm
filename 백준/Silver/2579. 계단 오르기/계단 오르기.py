N=int(input())
stairs=[int(input()) for _ in range(N)] # 계단 리스트 받기
dp = [0 for i in range(N)] # Dynamic Programming 리스트 초기화
# dp리스트의 각 인덱스에는 최대 점수 저장

if len(stairs)<=2: # 계단이 2개 이하일땐 최댓값은 그냥 모든 계단 다 밟을 때 
    print(sum(stairs))
    
else: # 계단이 3개 이상일 때
    dp[0]=stairs[0] # 첫째 계단
    dp[1]=stairs[0]+stairs[1] # 둘째 계단
    for i in range(2,N): # 세번째 계단부터 dp 점화식 이용해서 최대값 구하기
        dp[i]=max(dp[i-3]+stairs[i-1]+stairs[i], dp[i-2]+stairs[i])
        # 연속 2개 밟았을 때 계단의 합과 하나 건너 뛰고 밟았을 때 계단의 합 중 최댓값을 dp리스트에 저장 

    print(dp[N-1])