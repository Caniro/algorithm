# 행렬의 곱셈 : https://programmers.co.kr/learn/courses/30/lessons/12949

def solution(arr1, arr2): # NxM * MxK
    N = len(arr1)
    M = len(arr2)
    K = len(arr2[0])
    
    answer = []
    for n in range(N):
        row = []
        for k in range(K):
            total = 0
            for m in range(M):
                total += arr1[n][m] * arr2[m][k]
            row.append(total)
        answer.append(row)

    return answer

# zip, 리스트 컴프리헨션 사용

def solution1(arr1, arr2):
    return [[sum(a * b for a, b in zip(arr1_row, arr2_col)) for arr2_col in zip(*arr2)] for arr1_row in arr1]
