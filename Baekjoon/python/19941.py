# 햄버거 분배 : https://www.acmicpc.net/problem/19941

N, K = map(int, input().split())
table = input()
valid = [True if v == 'H' else False for v in table]

count = 0
for i in range(N):
    if table[i] == 'P':
        for j in range(i - K, i + K + 1):
            if j < 0 or j >= N or table[j] == 'P' or valid[j] == False:
                continue
            valid[j] = False
            count += 1
            break

print(count)
