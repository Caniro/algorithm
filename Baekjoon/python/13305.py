# 주유소 : https://www.acmicpc.net/problem/13305

from sys import stdin

N = int(input()) - 1
roads = list(map(int, stdin.readline().strip().split(' ')))
prices = list(map(int, stdin.readline().strip().split(' ')))[:-1]

minimum_price = 0
idx = 0
road = roads[idx]
price = prices[idx]
while True:
    if idx == N - 1:
        minimum_price += price * road
        break
    elif price <= prices[idx + 1]:
        road += roads[idx + 1]
    else:
        minimum_price += price * road
        price = prices[idx + 1]
        road = roads[idx + 1]
    idx += 1

print(minimum_price)
