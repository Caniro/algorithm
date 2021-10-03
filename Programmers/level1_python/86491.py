# 최소직사각형 : https://programmers.co.kr/learn/courses/30/lessons/86491

def solution(sizes):
    for card in sizes:
        card.sort()

    width = 0
    height = 0
    for card in sizes:
        if card[0] > width:
            width = card[0]
        if card[1] > height:
            height = card[1]

    return width * height

# 두 값 중 큰 값을 고를 때는 max 함수를 사용할 수 있다.

def solution1(sizes):
    for card in sizes:
        card.sort()

    width = 0
    height = 0
    for card in sizes:
        width = max(width, card[0])
        height = max(height, card[1])

    return width * height
