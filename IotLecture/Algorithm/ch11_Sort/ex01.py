# 정렬의 기본

def findMinIndex(arr):
    minIdx = 0
    for i in range(1, len(arr)):
        if arr[minIdx] > arr[i]:
            minIdx = i
    return minIdx

# array = [55, 88, 33, 77]

import random
array = [random.randint(1, 99) for _ in range(20)]

print(array)
print('최솟값 :', array[findMinIndex(array)])
