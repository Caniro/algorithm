# 복서 정렬하기 : https://programmers.co.kr/learn/courses/30/lessons/85002

def solution(weights, head2head):
    n = len(weights)
    
    rates = []
    win_bigger = [0] * n
    for i in range(n):
        wins = head2head[i].count('W')
        loses = head2head[i].count('L')
        if wins + loses == 0:
            rates.append(0)
        else:
            rates.append(wins / (wins + loses))
        for j in range(n):
            if head2head[i][j] == 'W' and weights[i] < weights[j]:
                win_bigger[i] += 1

    answer = []
    for i in range(n):
        max_rate = max(rates)
        idx = rates.index(max_rate)
        if rates.count(max_rate) != 1:
            for j in range(n):
                if rates[j] == max_rate:
                    if (win_bigger[idx] < win_bigger[j]) or \
                            (win_bigger[idx] == win_bigger[j] and weights[idx] < weights[j]):
                        idx = j
                        
        answer.append(idx + 1)
        rates[idx] = -1
        
    return answer
