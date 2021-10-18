# Byte Coin : https://www.acmicpc.net/problem/17521

def sell(i):
    global W, coin
    W += coin * prices[i]
    coin = 0
        
def buy(i):
    global W, coin
    new_coin = W // prices[i]
    coin += new_coin
    W -= new_coin * prices[i]

n, W = map(int, input().split())
prices = [int(input()) for _ in range(n)]

coin = 0
for i in range(n):
    if i == n - 1:
        sell(i)
    elif prices[i] < prices[i + 1]:
        buy(i)
    elif prices[i] > prices[i + 1]:
        sell(i)

print(W)
