# 폴리오미노 : https://www.acmicpc.net/problem/1343

board = input()
arr = board.split('.')
A = 'AAAA'
B = 'BB'

for i in range(len(arr)):
    length = len(arr[i])
    if length % len(A) and length % len(B):
        print(-1)
        exit()
    arr[i] = arr[i].replace('X' * len(A), A)
    arr[i] = arr[i].replace('X' * len(B), B)

print('.'.join(arr))
