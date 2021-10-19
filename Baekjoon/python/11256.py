# 사탕 : https://www.acmicpc.net/problem/11256

from sys import stdin
input = stdin.readline

def print_box_number():
    J, N = map(int, input().rstrip().split())
    RC = [R * C for R, C in [list(map(int, input().rstrip().split())) for _ in range(N)]]
    RC.sort(reverse=True)
    
    box = 0
    while True:
        if J <= 0:
            break
        J -= RC.pop(0)
        box += 1
    print(box)

T = int(input().rstrip())
for _ in range(T):
    print_box_number()
