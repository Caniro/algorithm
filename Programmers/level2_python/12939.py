# 최댓값과 최솟값 : https://programmers.co.kr/learn/courses/30/lessons/12939

def solution(s):
    s_to_list = list(map(int, s.split(' ')))
    return ' '.join((str(min(s_to_list)), str(max(s_to_list))))
