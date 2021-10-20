# 등수 매기기 : https://www.acmicpc.net/problem/2012

from sys import stdin
input = stdin.readline

N = int(input().rstrip())
expect = [0] + sorted([int(input().rstrip()) for _ in range(N)])
unsatisfied = 0
for i in range(1, N + 1):
    unsatisfied += abs(i - expect[i])

print(unsatisfied)
