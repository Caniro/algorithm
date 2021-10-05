# 다음 큰 숫자 : https://programmers.co.kr/learn/courses/30/lessons/12911

def solution(n):
    n_binary_string = bin(n)[2:].zfill(20)
    idx = n_binary_string.rfind('01')
    next_num = n_binary_string[:idx] + '10' + n_binary_string[idx + 2:]

    if idx >= 17:
        return int(next_num, 2)

    one_to_zero = idx + 2 + next_num[idx + 2].find('1')
    zero_to_one = next_num.rfind('0')

    if zero_to_one <= idx + 1 or one_to_zero <= idx + 1 or zero_to_one < one_to_zero:
        return int(next_num, 2)

    next_num = next_num[:one_to_zero] + '0' + next_num[one_to_zero + 1:zero_to_one] + \
                '1' + next_num[zero_to_one + 1:]

    return int(next_num, 2)

# n이 100만 이하여서 그런지 아래가 더 빠름

def solution1(n):
    number_of_one = bin(n)[2:].count('1')

    while True:
        n += 1
        if bin(n)[2:].count('1') == number_of_one:
            return n
