# 문자열을 정수로 바꾸기 : https://programmers.co.kr/learn/courses/30/lessons/12925

def solution(s):
    return int(s)

# 직접 구현하는게 성능상 빠르기는 함

def isnumber(num):
    if num >= '0' and num <= '9':
        return True
    return False

def solution1(s):
    sign = -1 if s[0] == '-' else 1
    abs_value = 0

    for num in s:
        if not isnumber(num):
            continue
        abs_value = abs_value * 10 + ord(num) - ord('0')
        
    return sign * abs_value
