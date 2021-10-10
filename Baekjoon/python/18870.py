# 좌표 압축 : https://www.acmicpc.net/problem/18870

N = int(input(''))
X = list(map(int, input('').split(' ')))

arr = sorted(set(X))
dic = {}

for idx, num in enumerate(arr):
    dic[num] = idx

for i in range(len(X)):
    X[i] = dic[X[i]]

print(' '.join(map(str, X)))
