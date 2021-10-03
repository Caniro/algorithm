# 제일 작은 수 제거하기 : https://programmers.co.kr/learn/courses/30/lessons/12935

def solution(arr):
    answer = arr.copy()
    min_value = 1e9
    index = 0
    
    for idx in range(len(arr)):
        if arr[idx] < min_value:
            index = idx
            min_value = arr[idx]
    del(answer[index])

    return answer if len(answer) else [-1]

# 문제 조건에 "인덱스 i, j에 대해 i ≠ j이면 arr[i] ≠ arr[j] 입니다." 라는 말이 없다면 위 코드는 사용 불가
# 리스트의 .pop(인덱스) 함수나, .remove(값) 함수를 사용할 수 있다.

def solution1(arr):
    answer = arr.copy()
    index = answer.index(min(answer))
    answer.pop(index)

    return answer if len(answer) else [-1]

def solution2(arr):
    answer = arr.copy()
    answer.remove(min(answer))

    return answer if len(answer) else [-1]
