# 나누어 떨어지는 숫자 배열 : https://programmers.co.kr/learn/courses/30/lessons/12910

def solution(arr, divisor):
    answer = []

    arr.sort()
    for num in arr:
        if num >= divisor and num % divisor == 0:
            answer.append(num)

    return answer if answer else [-1]

# 리스트 컴프리헨션 사용

def solution1(arr, divisor):
    return [num for num in sorted(arr) if num % divisor == 0] or [-1]
