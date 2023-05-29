num_list = []
for i in range(9) :
    num_list.append(int(input())) #리스트로 입력 

print(max(num_list)) # max 메소드를 이용해 num_lst 내의 최댓값 출력하기
print(num_list.index(max(num_list))+1)