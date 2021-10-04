# 문자열 내 마음대로 정렬하기 : https://programmers.co.kr/learn/courses/30/lessons/12915

def solution(strings, n):
    for i in range(len(strings) - 1):
        for j in range(i + 1, len(strings)):
            to_swap = i
            if strings[i][n] > strings[j][n]:
                to_swap = j
            elif strings[i][n] == strings[j][n]:
                if strings[i] > strings[j]:
                    to_swap = j
            strings[i], strings[to_swap] = strings[to_swap], strings[i]

    return strings
