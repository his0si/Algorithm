import datetime

print(str(datetime.datetime.now())[:10]) # now() 함수를 사용해 지금의 날짜, 시간을 출력
# str() 함수를 사용해 출력하려는 내용을 string 형태로 출력
# [:10]를 사용해 10글자만 출력하도록 하여 년, 월, 일만 출력하도록  함

print(str(datetime.datetime.today())[:10]) # today() 함수를 사용해 오늘의 날짜, 시간을 출력
# str() 함수를 사용해 출력하려는 내용을 string 형태로 출력
# [:10]를 사용해 10글자만 출력하도록 하여 년, 월, 일만 출력하도록  함

d=datetime.date.today()   #오늘 날짜의 date 객체 생성
print(d.isoformat())    #date 객체의 정보를 'YYYY-MM-DD'형태의 문자열로 반환하는 메서드
