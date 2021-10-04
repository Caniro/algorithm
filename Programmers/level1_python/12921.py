# 소수 찾기 : https://programmers.co.kr/learn/courses/30/lessons/12921

def is_prime(num):
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True
        
def solution(n):
    answer = 0
    
    for num in range(2, n + 1):
        if is_prime(num):
            answer += 1
    
    return answer

# 에라토스테네스의 체가 빠름

def solution(n):
    numbers = set(range(2, n + 1))

    for num in range(2, n + 1):
        if num in numbers:
            numbers -= set(range(num ** 2, n + 1, num))

    return len(numbers)
