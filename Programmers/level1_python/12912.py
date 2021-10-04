# 두 정수 사이의 합 : https://programmers.co.kr/learn/courses/30/lessons/12912

def solution(a, b):
    return sum(range(a, b + 1)) or sum(range(b, a + 1))

def solution1(a, b):
    if a * b < 0:
        return solution1(a, 0) + solution1(0, b)
    
    n = abs(b - a) + 1
    if n % 2 == 0:
        return n / 2 * (a + b)
    return n // 2 * (a + b) + (a + b) // 2

# 등차 수열 합
# sigma a+(k-1)d from 1 to n = (a-d)n + d*n*(n+1)/2 = n(a-d + d(n+1)/2)
#  = n(2a-2d+dn+d)/2 = n(2a+(n-1)d)/2 = n(a+(a+(n-1)d))/2 = n(a + b)/2

def solution2(a, b):
    n = (abs(b - a) + 1)
    return n * (a + b) / 2
