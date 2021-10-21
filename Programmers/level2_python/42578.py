# 위장 : https://programmers.co.kr/learn/courses/30/lessons/42578

# from itertools import combinations as cb

def solution(clothes):

    # clothes_dict에 'face': ['crowmask', 'bluesunglasses', ...] 처럼 입력
    clothes_dict = {}
    for element in clothes:
        clothes_name = element[0]
        clothes_type = element[1]
        if not clothes_dict.get(clothes_type, False):
            clothes_dict[clothes_type] = []
        clothes_dict[clothes_type].append(clothes_name)
        
    # 1부터 len(clothes_dict)까지 돌면서 조합 구하기 -> 시간 초과
    #   조합 개수는 각 리스트의 개수의 곱
    
    # answer = 0
    # for i in range(1, len(clothes_dict) + 1):
    #     for combi in cb(clothes_dict, i):
    #         total = 1
    #         for clothes_type in combi:
    #             total *= len(clothes_dict[clothes_type])
    #         answer += total
    # return answer

    # 모든 종류에 대해서 각 개수 + 1(안입는 경우) 값을 전부 곱하고 1(전부 안입은 경우)을 뺌
    total = 1
    for key in clothes_dict:
        total *= (len(clothes_dict[key]) + 1)
    return total - 1
