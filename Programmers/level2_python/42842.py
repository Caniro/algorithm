# 카펫 : https://programmers.co.kr/learn/courses/30/lessons/42842

def solution(brown, yellow):
    def get_divisors(num):
        divisors = []
        for i in range(2, num // 2 + 1, 1):
            if num % i == 0:
                divisors.append([i, num // i])
        return divisors
        
    answer = []
    # (brown + yellow) 약수 목록에서 하나씩 꺼내서
    # brown 개수 = (a + b) * 2 - 4
    # yellow 개수 = a * b - brown
    divisors = get_divisors(brown + yellow)
    for a, b in divisors:
        num_brown = (a + b) * 2 - 4
        num_yellow = a * b - brown
        if num_brown == brown and num_yellow == yellow:
            answer = [a, b] if a >= b else [b, a]
            break
    return answer
