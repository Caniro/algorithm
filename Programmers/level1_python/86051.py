# 없는 숫자 더하기 : https://programmers.co.kr/learn/courses/30/lessons/86051

def solution(numbers):    
    total_sum = 0
    for num in numbers:
        total_sum += num
    return 45 - total_sum
