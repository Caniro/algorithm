# 피보나치 수 : https://programmers.co.kr/learn/courses/30/lessons/12945

def solution(n):
    fibo = {
        0: 0,
        1: 1
    }

    for i in range(n + 1):
        if fibo.get(i, -1) == -1:
            fibo[i] = fibo[i - 1] + fibo[i - 2]

    return fibo[n] % 1234567

# 더 빠른 풀이. 한두번 구할 때는 이게 더 빠른 듯

def solution(n):
    a, b = 0, 1

    for _ in range(n):
        a, b = b, a + b

    return a % 1234567
