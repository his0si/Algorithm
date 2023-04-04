from sys import stdin
import sys

N = int(input())
meetings = []
result = 0

for _ in range(N):
    start, end = map(int, input().split())
    meetings.append((end, start)) # 각 회의의 끝나는 시간을 기준으로 정렬하기 위해 (end, start) 형태로 저장

meetings.sort() # 끝나는 시간을 기준으로 정렬

end_time = 0 # 이전 회의의 끝나는 시간

for meeting in meetings:
    if meeting[1] >= end_time: # 이전 회의가 끝난 이후에 시작하는 회의일 경우에만 참석 가능
        result += 1
        end_time = meeting[0] # 현재 회의가 끝나는 시간을 저장하여 다음 회의와 비교할 때 사용

print(result)
