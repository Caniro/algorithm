# [1차] 비밀지도 : https://programmers.co.kr/learn/courses/30/lessons/17681

def to_map(n, arr):
    world = []

    for num in arr:
        row = []
        for i in range(n):
            row.append(str(num % 2))
            num //= 2
        row.reverse()
        world.append(row)

    return world

def solution(n, arr1, arr2):
    world1 = to_map(n, arr1)
    world2 = to_map(n, arr2)
    total_world = []
    
    for row1, row2 in zip(world1, world2):
        new_row = []
        for row in zip(row1, row2):
            new_row.append('#' if sum(map(int, row)) else ' ')
        total_world.append(''.join(new_row))

    return total_world

# bin() 및 `|` 연산으로 바로 계산, .zfill() 메서드로 왼쪽에 0 채우기

def solution1(n, arr1, arr2):
    answer = []

    for i, j in zip(arr1, arr2):
        row = bin(i|j)[2:].zfill(n)
        row = row.replace('1', '#').replace('0', ' ')
        answer.append(row)

    return answer
