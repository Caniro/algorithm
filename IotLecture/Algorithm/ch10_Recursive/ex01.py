# 재귀 호출의 기본

def openBox():
    global count
    print('상자를 엽니다~~')
    count -= 1
    if count == 0:
        print('** 선물 넣기 **')
        return
    openBox()
    print('상자 닫기')

count = 10

openBox()
