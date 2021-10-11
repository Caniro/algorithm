# 거스름돈 : https://www.acmicpc.net/problem/5585

remain = 1000 - int(input())
coins = (500, 100, 50, 10, 5, 1)

count = 0
for coin in coins:
    if remain >= coin:
        num = remain // coin
        count += num
        remain -= num * coin

print(count)
