# 온라인 판매 : https://www.acmicpc.net/problem/1246

from sys import stdin
input = stdin.readline

N, M = map(int, input().rstrip().split())
P = [int(input().rstrip()) for _ in range(M)]
P.sort(reverse=True)

benefit = 0
price = 0
for i in range(M):
    if i >= N:
        break
    new_benefit = P[i] * (i + 1)
    if new_benefit > benefit:
        benefit = new_benefit
        price = P[i]

print(price, benefit)
