# 상호 평가 : https://programmers.co.kr/learn/courses/30/lessons/83201

def to_alpha(num):
    if (num >= 90):
        return 'A'
    elif (num >= 80):
        return 'B'
    elif (num >= 70):
        return 'C'
    elif (num >= 50):
        return 'D'
    return 'F'

def solution(scores):
    n = len(scores)
    idx = 0
    
    students = []
    for col in zip(*scores):
        total = sum(col)
        if col[idx] in (max(col), min(col)) and col.count(col[idx]) == 1:
            total -= col[idx]
            students.append(total / (n - 1))
        else:
            students.append(total / n)
        idx += 1
    
    return ''.join(map(to_alpha, students))

# enumerate로 idx 간소화 가능
