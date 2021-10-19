# 최소공배수 : https://www.acmicpc.net/problem/1934

from math import gcd

T = int(input())

for _ in range(T):
    a, b = map(int, input().split())
    print(a * b // gcd(a, b))
