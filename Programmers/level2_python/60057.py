# 문자열 압축 : https://programmers.co.kr/learn/courses/30/lessons/60057

def solution(s):
    answer = len(s)
    for unit in range(1, len(s) // 2 + 1):
        new_length = 0
        count = 1 # 중복 횟수
        for i in range(len(s) // unit):
            current_str = s[i * unit:(i + 1) * unit]
            next_str = s[(i + 1) * unit:(i + 2) * unit]
            if current_str == next_str: # 중복 시
                count += 1
            else: # 다른 문자열일 경우
                if count > 1:
                    new_length += len(str(count)) + unit
                else:
                    new_length += len(current_str)
                count = 1
        new_length += len(s) % unit
        if new_length < answer:
            answer = new_length
    return answer
