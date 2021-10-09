# 원형 큐

def isQueueEmpty():
    global SIZE, queue, front, rear

    if (front == rear):
        return True
    else:
        return False

def isQueueFull():
    global SIZE, queue, front, rear

    if (rear + 1) % SIZE == front:
        return True
    else:
        return False

def enQueue(data):
    global SIZE, queue, front, rear

    if (isQueueFull()):
        print('queue is full')
        return

    rear = (rear + 1) % SIZE
    queue[rear] = data

def deQueue():
    global SIZE, queue, front, rear

    if (isQueueEmpty()):
        print('queue is empty')
        return None
    
    front = (front + 1) % SIZE
    data = queue[front]
    queue[front] = None
    return data

SIZE = 5
queue = [ None for _ in range(SIZE) ]
front = 0
rear = 0

enQueue('화사')
enQueue('솔라')
enQueue('문별')
print('출구<--', queue, '<--입구')
enQueue('선미')
print('출구<--', queue, '<--입구')
enQueue('재남')
print('출구<--', queue, '<--입구')
print('추출 :', deQueue())
print('추출 :', deQueue())
print('출구<--', queue, '<--입구')
enQueue('재남')
print('출구<--', queue, '<--입구')
enQueue('스파이더맨')
print('출구<--', queue, '<--입구')
