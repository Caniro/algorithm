# [카카오 인턴] 키패드 누르기 : https://programmers.co.kr/learn/courses/30/lessons/67256

LEFT = 0; RIGHT = 1

def get_coor(current):
    return ((current - 1) // 3, (current - 1) % 3)

def distance(current, num):
    if current == '*':
        current = 10
    elif current == 0:
        current = 11
    elif current == '#':
        current = 12
    cx, cy = get_coor(current)

    if num == 0:
        num = 11
    nx, ny = get_coor(num)
    
    return abs(cx - nx) + abs(cy - ny)    

def touch_left(hands, num, answer):
    hands[LEFT] = num
    answer.append('L')
    
def touch_right(hands, num, answer):
    hands[RIGHT] = num
    answer.append('R')

def touch_middle(hands, num, answer, hand):
    ld = distance(hands[LEFT], num)
    rd = distance(hands[RIGHT], num)

    if ld < rd :
        touch_left(hands, num, answer)
    elif ld > rd:
        touch_right(hands, num, answer)
    elif hand == 'left':
        touch_left(hands, num, answer)
    else:
        touch_right(hands, num, answer)

def solution(numbers, hand):
    answer = []
    hands = ['*', '#']

    for num in numbers:
        if num in (1, 4, 7):
            touch_left(hands, num, answer)
        elif num in (3, 6, 9):
            touch_right(hands, num, answer)
        else:
            touch_middle(hands, num, answer, hand)

    return ''.join(answer)
