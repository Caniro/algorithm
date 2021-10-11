# 로프 : https://www.acmicpc.net/problem/2217

from sys import stdin

input = stdin.readline
N = int(input())
lopes = []
for _ in range(N):
    lopes.append(int(input()))
lopes.sort(reverse=True)

k = 0
max_w = 0
for lope in lopes:
    w = lope * (k + 1)
    if w >= max_w:
        max_w = w
    k += 1

print(max_w)
