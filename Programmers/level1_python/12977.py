# 소수 만들기 : https://programmers.co.kr/learn/courses/30/lessons/12977

from math import sqrt

def is_prime(num):
    for i in range(2, int(sqrt(num)) + 1, 1):
        if num % i == 0:
            return False
    return True

def solution(nums):
    count = 0
    length = len(nums)

    for i in range(length):
        for j in range(i + 1, length):
            for k in range(j + 1, length):
                number = nums[i] + nums[j] + nums[k]
                if is_prime(number):
                    count += 1

    return count

# 다른 사람의 풀이를 보니 combinations를 이용하여 아래와 같이 조합의 수를 구함
# from itertools import combinations
# for num_list in combinations(nums, 3):
#     number = sum(num_list)

# sqrt 대신 **0.5 사용 가능
