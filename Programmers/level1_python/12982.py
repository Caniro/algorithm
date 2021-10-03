# 예산 : https://programmers.co.kr/learn/courses/30/lessons/12982

def solution(d, budget):
    answer = 0
    d.sort()
    for price in d:
        if budget >= price:
            budget -= price
            answer += 1
    return answer
