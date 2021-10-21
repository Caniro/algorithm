# 조이스틱 : https://programmers.co.kr/learn/courses/30/lessons/42860

def solution(name):
    def go_next_idx():
        nonlocal answer, current_idx
        diff_min = 100
        next_idx = 0
        for i in range(length):
            if name[i] == current_string[i]:
                continue
            diff = min(abs(i - current_idx), length - abs(i - current_idx))
            if diff_min > diff:
                diff_min = diff
                next_idx = i
        current_idx = next_idx
        answer += diff_min
    
    def change_char():
        nonlocal answer, current_string
        to_change = name[current_idx]
        current_string[current_idx] = to_change
        cost = min(abs(ord(to_change) - ord('A')),\
                    (ord('Z') - ord('A') + 1) - abs(ord(to_change) - ord('A')))
        answer += cost
    
    answer = 0
    length = len(name)
    current_string = ['A' for _ in range(length)]
    current_idx = 0
    
    while True:
        if ''.join(current_string) == name:
            break
        go_next_idx()
        change_char()

    return answer
