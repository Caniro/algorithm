# x만큼 간격이 있는 n개의 숫자 : https://programmers.co.kr/learn/courses/30/lessons/12954

def solution(x, n):
    return [x * (idx + 1) for idx in range(n)]
