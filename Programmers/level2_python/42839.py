# 소수 찾기 : https://programmers.co.kr/learn/courses/30/lessons/42839

from itertools import permutations as pm

def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1, 1):
        if num % i == 0:
            return False
    return True

def solution(numbers):
    answer = 0
    num_set = set()
    for i in range(1, len(numbers) + 1):
        for num_list in pm(list(numbers), i):
            num = int(''.join(num_list))
            num_set.add(num)
    for num in num_set:
        if is_prime(num):
            answer += 1
    return answer
