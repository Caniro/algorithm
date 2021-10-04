# 문자열 다루기 기본 : https://programmers.co.kr/learn/courses/30/lessons/12918

def solution(s):
    if not len(s) == 4 or len(s) == 6:
        return False
    for char in s:
        if char < '0' or char > '9':
            return False
    return True

# .isdigit() 함수를 통해 숫자로만 구성된 문자열인지 판별 가능

def solution1(s):
    return True if s.isdigit() and (len(s) == 4 or len(s) == 6) else False

# 특정 값의 집합에 포함되는지 검사

def solution2(s):
    return s.isdigit() and len(s) in (4, 6)
