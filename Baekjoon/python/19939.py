# 박 터뜨리기 : https://www.acmicpc.net/problem/19939

N, K = map(int,input().split())

# 연속된 K개의 수를 줄세워놓고 각 +1씩하는게 최적해
# 30 4의 경우 1,2,3,4에서 각 +5하여 6,7,8,9로 3
# 31 4는 6,7,8,10으로 4이고, 이후로 33까지도 4
# 34가 되는 순간 7,8,9,10으로 다시 3
# 즉 K개일 때 최적의 경우 K-1이고, 아니면 K
# 연속으로 세울 수 없는 경우 == total보다 N이 작은 경우 : -1

total = K * (K + 1) // 2
diff = N - total
if N < total:
    print(-1)
elif diff % K == 0:
    print(K - 1)
else:
    print(K)
