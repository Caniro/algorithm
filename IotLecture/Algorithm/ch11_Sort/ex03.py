# 선택 정렬 - 배열 하나에서 스왑

def findMinIndex(arr):
    minIdx = 0
    for i in range(1, len(arr)):
        if arr[minIdx] > arr[i]:
            minIdx = i
    return minIdx

def selectionSort(arr):
    n = len(arr)
    for i in range(0, n - 1):
        minIdx = i
        for j in range(i + 1, n):
            if arr[minIdx] > arr[j]:
                minIdx = j
        arr[i], arr[minIdx] = arr[minIdx], arr[i]

import random
array = [random.randint(1, 99) for _ in range(20)]

print('정렬 전 :', array)
selectionSort(array)
print('정렬 후 :', array)
