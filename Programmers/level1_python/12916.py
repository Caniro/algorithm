# 문자열 내 p와 y의 개수 : https://programmers.co.kr/learn/courses/30/lessons/12916

def solution(s):
    pnum = s.count('p') + s.count('P')
    ynum = s.count('y') + s.count('Y')

    return pnum == ynum

# 전부 소문자로 바꾸고 한번에 계산

def solution(s):
    string = s.lower()

    return string.count('p') == string.count('y')

# collections.Counter 클래스 사용

from collections import Counter

def solution(s):
    c = Counter(s.lower())

    return c['p'] == c['y']
