# JadenCase 문자열 만들기 : https://programmers.co.kr/learn/courses/30/lessons/12951

def solution(s):
    return ' '.join(word[0].upper() + word[1:].lower() if word else '' for word in s.split(' '))

# .capitalize() 사용

def solution1(s):
    return ' '.join(word.capitalize() for word in s.split(' '))
