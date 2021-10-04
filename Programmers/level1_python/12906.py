# 같은 숫자는 싫어 : https://programmers.co.kr/learn/courses/30/lessons/12906

def solution(arr):
    answer = []
    answer.append(arr[0])
    
    for j in range(1, len(arr)):
        if answer[-1] == arr[j]:
            continue
        answer.append(arr[j])

    return answer

# 슬라이싱으로 조금 더 깔끔하게. 근데 조금 느림

def solution1(arr):
    answer = []
    
    for j in range(len(arr)):
        if answer[-1:] == [arr[j]]:
            continue
        answer.append(arr[j])

    return answer
