# 하샤드 수 : https://programmers.co.kr/learn/courses/30/lessons/12947

def sum_all_digit(x):
    total = 0
    
    while (x > 0):
        total += x % 10
        x //= 10
    
    return total

def solution(x):
    return x % sum_all_digit(x) == 0


# 리스트 컴프리헨션 + sum 함수

def sum_all_digit1(x):
    return sum([int(n) for n in str(x)])
