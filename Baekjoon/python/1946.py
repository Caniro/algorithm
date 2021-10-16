# 신입 사원 : https://www.acmicpc.net/problem/1946
# 시간 초과
from sys import stdin

input = stdin.readline
T = int(input().strip())
for _ in range(T):
    N = int(input().strip())
    count = N
    applies = []
    invalid = [0] * N
    for i in range(N):
        applies.append(list(map(int, input().strip().split(' '))))
    applies.sort(key=lambda apply: apply[0])
    for i in range(N):
        if invalid[i] == 1:
            continue
        for j in range(i + 1, N):
            if invalid[j] == 0 and applies[i][1] < applies[j][1]:
                count -= 1
                invalid[j] = 1
    print(count)
