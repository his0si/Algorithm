word = input().lower() # lower()을 사용해서 입력 받은 문자를 소문자로만 받음
word_list = list(set(word)) # word_list = ['m', 'i', 's', 'p'] / ['b', 'a']
# set 집합 자료형은 리스트나 튜플과 다르게 중복을 허용하지 않고 순서가 없다!!
# 그래서 set은 자료형의 중복을 제거하기 위해서 사용 된다.
cnt = []

for i in word_list:
    count = word.count(i)
    cnt.append(count)       

if cnt.count(max(cnt)) >= 2: # cnt 리스트에서 최대값의 개수가 2 이상인지를 확인하는 조건
    #cnt.count()는 cnt 리스트에서 주어진 값의 개수를 반환
    print("?")
else:
    print(word_list[(cnt.index(max(cnt)))].upper()) # upper()을 사용해서 정답을 대문자로 출력
# 리스트 word_list에서 가장 큰 값을 가지는 원소의 인덱스를 반환