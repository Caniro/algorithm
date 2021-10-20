# 가장 긴 증가하는 부분 수열 : https://www.acmicpc.net/problem/11053

from sys import stdin
input = stdin.readline
INF = 1e9

def lis(arr):
    if not arr:
        return 0

    c = [-INF] + [INF] * len(arr)
    c[1] = arr[0]
    max_length = 1

    def search(low, high, value):
        if low == high:
            return low
        elif low + 1 == high:
            return high if value > c[low] else low
        
        mid = (low + high) // 2
        if c[mid] == value:
            return mid
        elif c[mid] < value:
            return search(mid + 1, high, value)
        else:
            return search(low, mid, value)
    
    for num in arr[1:]:
        if num > c[max_length]:
            max_length += 1
            c[max_length] = num
        else:
            next_idx = search(1, max_length, num)
            c[next_idx] = num
    return max_length

N = int(input().rstrip())
A = [int(n) for n in input().rstrip().split()]

print(lis(A))
