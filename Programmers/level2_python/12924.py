# 숫자의 표현 : https://programmers.co.kr/learn/courses/30/lessons/12924

def solution(n):
    answer = 0
    
    for i in range(1, n + 1):
        temp_sum = 0
        for j in range(i, n + 1):
            temp_sum += j
            if temp_sum == n:
                answer += 1
                break
            elif temp_sum > n:
                break

    return answer
