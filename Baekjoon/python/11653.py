# 소인수분해 : https://www.acmicpc.net/problem/11653

N = int(input())
if N == 1:
    exit()

while True:
    for i in range(2, N + 1):
        if N % i == 0:
            N = N // i
            print(i)
            break
    if N == 1:
        break
