# 퇴사 : https://www.acmicpc.net/problem/14501

def get_benefit(i, benefit):
    if i >= N or i + consults[i][0] > N:
        return benefit
    next_day = i + consults[i][0]
    current_benefit = consults[i][1]
    new_benefit = max(get_benefit(next_day, benefit + current_benefit), 
                     get_benefit(i + 1, benefit))
    return new_benefit

N = int(input())
consults = [list(map(int, input().split())) for _ in range(N)]

print(get_benefit(0, 0))
