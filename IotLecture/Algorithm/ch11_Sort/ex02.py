# 선택 정렬 - 배열 내용을 옮겨서

def findMinIndex(arr):
    minIdx = 0
    for i in range(1, len(arr)):
        if arr[minIdx] > arr[i]:
            minIdx = i
    return minIdx

import random
before = [random.randint(1, 99) for _ in range(20)]
after = []

print('정렬 전 :', before)

for i in range(20):
    minIdx = findMinIndex(before)
    after.append(before[minIdx])
    del(before[minIdx])

print('정렬 후 :', after)
