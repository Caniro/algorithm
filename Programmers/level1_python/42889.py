# 실패율 : https://programmers.co.kr/learn/courses/30/lessons/42889#

def solution(N, stages):
    people = len(stages)
    
    stages.sort()
    rates = []
    for i in range(1, N + 1):
        rates.append(stages.count(i) / people if people else 0)
        people -= stages.count(i)

    rank = []
    for _ in range(N):
        idx = rates.index(max(rates))
        rank.append(idx + 1)
        rates[idx] = -1

    return rank
