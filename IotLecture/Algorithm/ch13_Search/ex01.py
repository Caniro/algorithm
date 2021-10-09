# 이진 탐색

def binarySearch(arr, fdata):
    idx = -1
    start = 0
    end = len(arr) - 1
    while start <= end:
        mid = (start + end) // 2
        if arr[mid] == fdata:
            return mid
        elif arr[mid] < fdata:
            start = mid + 1
        else:
            end = mid - 1
    return idx

data = [50, 60, 105, 120, 150, 160, 162, 168, 177, 188]

print('배열-->', data)
# findData = 162
findData = 164
idx = binarySearch(data, findData)
if idx == -1:
    print(f'{findData}가 없음')
else:
    print(f'{findData}의 인덱스 : {idx}')
