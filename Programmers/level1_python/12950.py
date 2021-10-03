# 행렬의 덧셈 : https://programmers.co.kr/learn/courses/30/lessons/12950

def solution(arr1, arr2):
    answer = []
    
    for rows in zip(arr1, arr2):
        new_row = []
        for cols in zip(*rows):
            new_row.append(sum(cols))
        answer.append(new_row)

    return answer

# numpy 사용

import numpy as np

def solution(arr1, arr2):
    np1 = np.array(arr1)
    np2 = np.array(arr2)

    return (np1 + np2).tolist()
