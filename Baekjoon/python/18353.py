# 병사 배치하기 : https://www.acmicpc.net/problem/18353

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
            return high if c[low] < value else low
        
        mid = (low + high) // 2
        if c[mid] == value:
            return mid
        elif c[mid] < value:
            return search(mid + 1, high, value)
        else:
            return search(low, mid, value)
    
    for num in arr[1:]:
        if c[max_length] < num:
            max_length += 1
            c[max_length] = num
        else:
            insert_idx = search(1, max_length, num)
            c[insert_idx] = num
    return max_length

N = int(input())
powers = [-int(p) for p in input().split()]

print(N - lis(powers))
