# 피보나치 함수 : https://www.acmicpc.net/problem/1003

from sys import stdin
input = stdin.readline

def print_zeroone():
    N = int(input().rstrip())
    fibo = [0] * (N + 2)
    fibo[N] = 1

    for i in range(N, 1, -1):
        fibo[i - 1] += fibo[i]
        fibo[i - 2] += fibo[i]
    print(fibo[0], fibo[1])

T = int(input().rstrip())
for _ in range(T):
    print_zeroone()
