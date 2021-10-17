# 행렬 : https://www.acmicpc.net/problem/1080

from sys import stdin
input = stdin.readline

N, M = map(int, input().rstrip().split())
A = []
B = []
for _ in range(N):
    string = input().rstrip()
    A.append(list(string))
for _ in range(N):
    string = input().rstrip()
    B.append(list(string))

diff = []
for row_idx in range(N):
    diff_row = []
    for col_idx in range(M):
        if A[row_idx][col_idx] == B[row_idx][col_idx]:
            diff_row.append(False)
        else:
            diff_row.append(True)
    diff.append(diff_row)

def transform3x3(mat, i, j):
    global count
    if i + 3 > len(mat) or j + 3 > len(mat[0]):
        return

    count += 1
    for row in range(i, i + 3):
        for col in range(j, j + 3):
            mat[row][col] = not mat[row][col]

count = 0
for i in range(N):
    for j in range(M):
        if diff[i][j] == True:
            transform3x3(diff, i, j)

for i in range(N):
    for j in range(M):
        if diff[i][j] == True:
            print(-1)
            exit()

print(count)
