# 스네이크버드 : https://www.acmicpc.net/problem/16435

from sys import stdin
input = stdin.readline

N, L = map(int, input().rstrip().split())
H = sorted(list(map(int, input().rstrip().split())))

for i in range(N):
    if L >= H[i]:
        L += 1
    else:
        break

print(L)
