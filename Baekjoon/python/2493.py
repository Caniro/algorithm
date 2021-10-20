# 탑 : https://www.acmicpc.net/problem/2493

INF = 1e9
N = int(input())
towers = [0] + [int(num) for num in input().split()]
received = [0] * (N + 1)
last_max_idx = 0

for i in range(1, N + 1):
    if towers[i] <= towers[last_max_idx]:
        received[i] = last_max_idx
    if towers[last_max_idx] < towers[i]:
        last_max_idx = i

print(received[1:])