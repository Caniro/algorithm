# N과 M (1) : https://www.acmicpc.net/problem/15649

def permu(numbers, depth):
    if depth >= M:
        print(' '.join(numbers))
        return
    
    for i in range(1, N + 1):
        if str(i) in numbers:
            continue
        numbers.append(str(i))
        permu(numbers, depth + 1)
        numbers.remove(str(i))

N, M = map(int, input().split())

numbers = []
for i in range(1, N + 1):
    numbers.append(str(i))
    permu(numbers, 1)
    numbers.remove(str(i))
