S=input()

result = [-1] * 26  # 리스트 초기화

for i in range(len(S)):
    index = ord(S[i]) - ord('a')  # 'a'를 인덱스 0으로 맞춰서 편하게 계산 
    
# ord 함수 : 문자를 아스키코드로 변환
    
    if result[index] == -1: 
        result[index] = i

for i in range(26):
    print(result[i], end=" ")