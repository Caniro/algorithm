# 큐의 일반 구현 개선 - 남는 공간 활용

def isQueueFull():
    global SIZE, queue, front, rear

    if (rear != SIZE - 1):
        return False
    elif (rear == SIZE - 1 and front == -1):
        return True
    else:
        for i in range(front + 1, SIZE):
            queue[i - 1] = queue[i]
            queue[i] = None
        front -= 1
        rear -= 1
        return False

def isQueueEmpty():
    global SIZE, queue, front, rear

    if (front == rear):
        return True
    else:
        return False

def enQueue(data):
    global SIZE, queue, front, rear

    if (isQueueFull()):
        print('queue is full')
        return
    
    rear += 1
    queue[rear] = data

def deQueue():
    global SIZE, queue, front, rear

    if (isQueueEmpty()):
        print('queue is empty')
        return None
    
    front += 1
    data = queue[front]
    queue[front] = None
    return data

def peek():
    global SIZE, queue, front, rear

    if (isQueueEmpty()):
        print('queue is empty')
        return None
    
    return queue[front + 1]


SIZE = 5
queue = [ None for _ in range(SIZE) ]
front = -1
rear = -1

enQueue('화사')
enQueue('솔라')
enQueue('은별')
enQueue('휘인')
enQueue('선미')
print('출구<--', queue, '<--입구')

print('추출 :', deQueue())
print('추출 :', deQueue())
print('출구<--', queue, '<--입구')
enQueue('재남')
print('출구<--', queue, '<--입구')
enQueue('스파이더맨')
print('출구<--', queue, '<--입구')
enQueue('배트맨')
print('출구<--', queue, '<--입구')
