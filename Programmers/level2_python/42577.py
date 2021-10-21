# 전화번호 목록 : https://programmers.co.kr/learn/courses/30/lessons/42577

def solution(phone_book):
    table = {}
    for s in phone_book:
        table[s] = True
    for s in phone_book:
        for i in range(1, len(s), 1):
            is_in_table = table.get(s[0:i], False)
            if is_in_table == True:
                return False
    return True
