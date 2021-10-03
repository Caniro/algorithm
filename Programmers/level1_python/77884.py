# 약수의 개수와 덧셈 : https://programmers.co.kr/learn/courses/30/lessons/77884

def num_yaksoo(number):
    count = 0

    for i in range(1, number + 1):
        if number % i == 0:
            count += 1

    return count

def solution(left, right):
    total = 0

    for num in range(left, right + 1):
        total += num if num_yaksoo(num) % 2 == 0 else -num

    return total

# 약수의 개수가 홀수인 수는 어떤 수의 제곱수인 점을 이용. 이게 훨씬 빠르다.

def solution1(left, right):
    total = 0

    for num in range(left, right + 1):
        if int(num ** 0.5) == num ** 0.5:
            total -= num
        else:
            total += num

    return total
