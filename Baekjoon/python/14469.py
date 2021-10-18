# 소가 길을 건너간 이유 3 : https://www.acmicpc.net/problem/14469

from sys import stdin
input = stdin.readline

N = int(input().rstrip())
cows = [list(map(int, input().rstrip().split())) for _ in range(N)]
cows.sort()

elapsed = 0
for arrived, duration in cows:
    if elapsed < arrived:
        elapsed = arrived
    elapsed += duration
print(elapsed)
