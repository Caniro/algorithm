# 카약 : https://www.acmicpc.net/problem/2890

R, C = map(int, input().split())
world = [input() for _ in range(R)]
far_from_final = [-1] * 10

for i in range(R):
    for j in range(C - 2, 0, -1):
        if world[i][j] != '.':
            far_from_final[int(world[i][j])] = C - 2 - j
            break
sorted_far = sorted(list(set(far_from_final)))

rank = [0] * 10
for i in range(1, 10):
    for j in range(1, 10):
        if far_from_final[i] == sorted_far[j]:
            rank[i] = j
            break

for i in range(1, 10):
    print(rank[i])
