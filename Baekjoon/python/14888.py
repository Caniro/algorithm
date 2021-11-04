# 연산자 끼워넣기 : https://www.acmicpc.net/problem/14888

def bt(ops, depth, total):
    global total_max, total_min
    if depth >= N:
        if total > total_max:
            total_max = total
        if total < total_min:
            total_min = total
        return
    for i in range(len(ops)):
        if ops[i] == 0:
            continue
        ops[i] -= 1
        old_total = total
        if i == 3 and total < 0:
            total *= -1
            total = eval(f'{total}' + operator[i] + str(A[depth]))
            total *= -1
        else:
            total = eval(f'{total}' + operator[i] + str(A[depth]))
        bt(ops, depth + 1, total)
        total = old_total
        ops[i] += 1

INF = 1e9

N = int(input())
A = list(map(int, input().split()))
ops = list(map(int, input().split()))
operator = ['+', '-', '*', '//']
total_max = -INF
total_min = INF

total = A[0]
bt(ops, 1, total)

print(total_max)
print(total_min)

# 이건 dfs 아닌가..???