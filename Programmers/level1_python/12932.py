# 자연수 뒤집어 배열로 만들기 : https://programmers.co.kr/learn/courses/30/lessons/12932

def solution(n):
    answer = []
    
    for num in str(n):
        answer.insert(0, int(num))
        
    return answer

# list, map, reversed를 사용할 수 있다.

def solution1(n):
    return list(map(int, reversed(str(n))))
