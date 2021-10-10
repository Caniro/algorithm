# 동전 0 : https://www.acmicpc.net/problem/11047

N, K = map(int, input('').split(' '))

coins = []
for _ in range(N):
    coins.append(int(input('')))

count = 0
coin_type = N - 1
while True:
    if coin_type < 0:
        break
    if K < coins[coin_type]:
        coin_type -= 1
    else:
        num = K // coins[coin_type]
        K -= coins[coin_type] * num
        count += num

print(count)
