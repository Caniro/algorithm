# 가운데 글자 가져오기 : https://programmers.co.kr/learn/courses/30/lessons/12903

def solution(s):
   return s[len(s) // 2] if len(s) % 2 else s[len(s) // 2 - 1:len(s) // 2 + 1]

# 통합

def solution(s):
    return s[(len(s) - 1) // 2:len(s) // 2 + 1]
