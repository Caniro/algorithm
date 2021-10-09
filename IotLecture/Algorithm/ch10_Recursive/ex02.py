# 재귀 호출 - 숫자 합계

def addNumber(num):
    if num <= 1:
        return 1
    return num + addNumber(num - 1)

print(addNumber(10))
