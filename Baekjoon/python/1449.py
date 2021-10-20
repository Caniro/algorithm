# 수리공 항승 : https://www.acmicpc.net/problem/1449

N, L = map(int, input().split())
leaks = sorted([int(num) for num in input().split()])

tapes = 0
i = 0
while i < N:
    start = i
    end = i
    while end < N and leaks[end] - leaks[start] <= L - 1:
        end += 1
    tapes += 1
    i = end

print(tapes)
