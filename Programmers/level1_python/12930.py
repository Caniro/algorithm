# 이상한 문자 만들기 : https://programmers.co.kr/learn/courses/30/lessons/12930

def solution(s):
    answer = ''
    is_upper_turn = True
    
    for i in range(len(s)):
        if s[i] == ' ':
            char = s[i]
            is_upper_turn = True
        else:
            char = s[i].upper() if is_upper_turn else s[i].lower()
            is_upper_turn = not is_upper_turn
        answer += char

    return answer

# split()은 공백이 여러개일 경우 덩어리 취급하고, split(' ')은 개별 취급하는 점 주의
# 공백이 여러 개인 문자열에 대해 .split(' ') 함수 호출 시 빈 문자열도 포함됨

def to_strange(word):
    result = []
    
    for i in range(len(word)):
        if i % 2 == 0:
            result.append(word[i].upper())
        else:
            result.append(word[i].lower())

    return ''.join(result)

def solution(s):
    answer = []
    
    for word in s.split(' '):
        answer.append(to_strange(word))
    
    return ' '.join(answer)
