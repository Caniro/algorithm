# 폰켓몬 : https://programmers.co.kr/learn/courses/30/lessons/1845

def solution(nums):
    length = len(nums) / 2
    set_length = len(set(nums))
    return min(length, set_length)
