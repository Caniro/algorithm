# 국회의원 선거 : https://www.acmicpc.net/problem/1417

N = int(input())
dasom = int(input())
candi = [int(input()) for _ in range(N - 1)]

count = 0
if N != 1:
    while True:
        if dasom > max(candi):
            break
        max_idx = candi.index(max(candi))
        candi[max_idx] -= 1
        dasom += 1
        count += 1

print(count)
