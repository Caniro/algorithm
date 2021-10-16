# 약수 : https://www.acmicpc.net/problem/1037

N = int(input())
d = list(map(int, input().split(' ')))
d.sort()
print(d[0] * d[-1])
