# 음양 더하기 : https://programmers.co.kr/learn/courses/30/lessons/76501

def solution(absolutes, signs):
    total_sum = 0
    for i in range(len(absolutes)):
        total_sum += absolutes[i] if signs[i] is True else -absolutes[i]
    return total_sum
