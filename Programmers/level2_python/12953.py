# N개의 최소공배수 : https://programmers.co.kr/learn/courses/30/lessons/12953

from math import gcd

def solution(arr):
    answer = 1

    for num in arr:
        answer = answer * num // gcd(answer, num)

    return answer
