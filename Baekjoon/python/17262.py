# 팬덤이 넘쳐흘러 : https://www.acmicpc.net/problem/17262

from sys import stdin
input = stdin.readline

N = int(input().rstrip())
fans = [list(map(int, input().rstrip().split())) for _ in range(N)]
fans.sort()

se = [time for time in zip(*fans)]

duration = max(se[0]) - min(se[1])
print(duration if duration > 0 else 0)
