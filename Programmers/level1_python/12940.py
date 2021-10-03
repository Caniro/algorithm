# 최대공약수와 최소공배수 : https://programmers.co.kr/learn/courses/30/lessons/12940

from math import gcd

def solution(n, m):
    answer = []
    
    g = gcd(n, m)
    answer.append(g)
    answer.append(g * max(n / g, m / g) * min(n / g, m / g))
    
    return answer

# 최소 공배수는 n * m / g 로도 구할 수 있다.

from math import gcd

def solution1(n, m):
    answer = []
    
    g = gcd(n, m)
    answer.append(g)
    answer.append(n * m / g)
    
    return answer
