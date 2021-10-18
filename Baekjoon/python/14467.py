# 소가 길을 건너간 이유 1 : https://www.acmicpc.net/problem/14467

N = int(input())
cows = [-1 for _ in range(11)]

count = 0
for _ in range(N):
    cow, pos = map(int, input().split())
    if pos != cows[cow] and cows[cow] != -1:
        count += 1
    cows[cow] = pos

print(count)
