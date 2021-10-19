# 부분 문자열 : https://www.acmicpc.net/problem/6550

from sys import stdin
input = stdin.readline

def print_is_substring():
    s, t = input().rstrip().split()
    s_idx = 0
    t_idx = 0
    while t_idx < len(t):
        if s_idx == len(s):
            break
        elif t[t_idx] == s[s_idx]:
            s_idx += 1
        t_idx += 1
    if s_idx == len(s):
        print('Yes')
    else:
        print('No')
                
try:
    while True:
        print_is_substring()
except:
    pass
