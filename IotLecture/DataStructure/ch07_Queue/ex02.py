# 큐의 일반 구현

def isQueueFull():
    global SIZE, queue, front, rear

    if (rear == SIZE - 1):
        return True
    else:
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
print('출구<--', queue, '<--입구')
enQueue('휘인')
enQueue('선미')
print('출구<--', queue, '<--입구')
enQueue('재남')

print('추출 :', deQueue())
print('다음 :', peek())
print('추출 :', deQueue())
print('추출 :', deQueue())
print('추출 :', deQueue())
print('추출 :', deQueue())
print('추출 :', deQueue())
print('다음 :', peek())
print('출구<--', queue, '<--입구')
