# 부족한 금액 계산하기 : https://programmers.co.kr/learn/courses/30/lessons/82612

def solution(price, money, count):
    total = count * price * (count + 1) / 2
    return 0 if total <= money else total - money

# max 함수 사용... 이게 과연 좋은 코드인가

def solution(price, money, count):
    total = count * price * (count + 1) / 2
    return max(0, total - money)
