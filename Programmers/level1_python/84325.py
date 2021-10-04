# 직업군 추천하기 : https://programmers.co.kr/learn/courses/30/lessons/84325

def multiply_each(arr1, arr2):
    new_arr = []

    for i in range(len(arr1)):
        new_arr.append(arr1[i] * arr2[i])

    return new_arr
        
def solution(table, languages, preference):    
    table_list = [row.split(' ') for row in table]
    scores = []
    for row in table_list:
        score = []
        for lang in languages:
            idx = 6
            for i in range(len(row)):
                if row[i] == lang:
                    idx = i
            score.append(6 - idx)
        scores.append(score)
    
    totals = []
    for score in scores:
        totals.append(sum(multiply_each(score, preference)))
    
    max_value = max(totals)
    if totals.count(max_value) > 1:
        first = totals.index(max_value)
        for i in range(len(totals)):
            if totals[i] == max_value and table_list[i][0] < table_list[first][0]:
                first = i
        return table_list[first][0]
    
    return table_list[totals.index(max_value)][0]
