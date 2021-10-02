# 스택의 일반 구현

def isStackFull():
    global SIZE, stack, top

    return True if top == SIZE - 1 else False
    # if top == SIZE - 1:
    #     return True
    # return False

def push(data):
    global SIZE, stack, top

    if isStackFull():
        print('stack is full:', data)
        return
    
    top += 1
    stack[top] = data

def isStackEmpty():
    global SIZE, stack, top

    return True if top == -1 else False


def pop():
    global SIZE, stack, top

    if isStackEmpty():
        print('stack is empty')
        return None
    
    data = stack[top]
    stack[top] = None
    top -= 1
    return data

SIZE = 5
stack = [None for _ in range(SIZE)]
# stack = [None] * SIZE
top = -1

push('커피')
push('녹차')
push('꿀물')
push('커피')
push('녹차')
push('꿀물')
print('바닥:', stack)

print(pop())
print(pop())
print(pop())
print(pop())
print(pop())
print(pop())
print('바닥:', stack)
