# 3진법 뒤집기 : https://programmers.co.kr/learn/courses/30/lessons/68935

def solution(n):
    answer = 0
    remains = []
    
    while (n >= 1):
        remains.append(n % 3)
        n = n // 3

    remains.reverse()

    for idx, num in enumerate(remains):
        answer += num * (3 ** idx)
    
    return answer

# int(숫자, 진수)를 이용하여 바로 계산할 수 있다.

def solution1(n):
    answer = 0
    remains = []
    
    while (n >= 1):
        remains.append(str(n % 3))
        n = n // 3

    answer = int(''.join(remains), 3)
    
    return answer
