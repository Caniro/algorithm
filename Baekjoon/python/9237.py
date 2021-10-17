# 이장님 초대 : https://www.acmicpc.net/problem/9237

from sys import stdin
input = stdin.readline

N = int(input().rstrip())
durations = sorted(list(map(int, input().rstrip().split())), reverse=True)

remain_at_end_day = 0
for i in range(N):
    remain = durations[i] - (N - 1 - i)
    if remain > remain_at_end_day:
        remain_at_end_day = remain

print(N + remain_at_end_day + 1)
