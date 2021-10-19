# Yangjojang of The Year : https://www.acmicpc.net/problem/11557

from sys import stdin
input = stdin.readline

T = int(input().rstrip())
for _ in range(T):
    N = int(input().rstrip())
    drunk = {}
    for _ in range(N):
        college, quantity = input().rstrip().split()
        drunk[college] = int(quantity)
    sorted_drunk = sorted(drunk, key=lambda x: int(drunk[x]), reverse=True)
    print(sorted_drunk[0])
