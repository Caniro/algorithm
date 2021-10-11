# 수들의 합 : https://www.acmicpc.net/problem/1789

S = int(input())

count = 1
while True:
    S -= count
    if S <= 0 or S <= count:
        break
    count += 1

print(count)
