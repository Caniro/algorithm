# ATM : https://www.acmicpc.net/problem/11399

N = int(input(''))
times = list(map(int, input('').split(' ')))
times.sort()

total = 0
num = len(times)
for i in range(len(times)):
    total += times[i] * num
    num -= 1

print(total)
