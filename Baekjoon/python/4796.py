# 캠핑 : https://www.acmicpc.net/problem/4796

from sys import stdin
input = stdin.readline

i = 1
while True:
    L, P, V = map(int, input().rstrip().split(' '))
    if L == 0 and P == 0 and V == 0:
        break
    a = int((V // P) * L)
    b = L if V % P > L else V % P
    print(f'Case {i}: {a + b}')
    i += 1
