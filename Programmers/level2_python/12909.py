# 올바른 괄호 : https://programmers.co.kr/learn/courses/30/lessons/12909

def solution(s):
    s_list = list(s)
    stack = []
    
    for ch in s_list:
        if ch == '(':
            stack.append(1)
        elif len(stack) == 0:
            return False
        else:
            stack.pop()

    if stack:
        return False
    return True
