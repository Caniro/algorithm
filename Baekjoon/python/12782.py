# 비트 우정지수 : https://www.acmicpc.net/problem/12782

def friend_test():
    a, b = input().split()
    length = len(a)
    diff_count = 0
    point = 0
    for i in range(length):
        if a[i] != b[i]:
            diff_count += 1
    diff_ones = abs(a.count('1') - b.count('1'))
    diff_count -= diff_ones
    point += diff_ones + diff_count // 2
    return point

T = int(input())
for _ in range(T):
    print(friend_test())
