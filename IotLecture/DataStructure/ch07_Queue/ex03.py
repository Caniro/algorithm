# 큐의 일반 구현 - 입력받기

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

if __name__ == '__main__':
    while True:
        select = input('삽입(i)/추출(e)/확인(v)/종료(x) 중 선택 ==> ')
        if select in ('x', 'X'):
            print('프로그램 종료')
        elif select in ('i', 'I'):
            data = input('입력할 데이터 ==> ')
            enQueue(data)
            print('큐 상태 :', queue)
        elif select in ('e', 'E'):
            data = deQueue()
            print('추출된 데이터 ==>', data)
            print('큐 상태 :', queue)
        elif select in ('v', 'V'):
            data = peek()
            print('확인된 데이터 ==>', data)
            print('큐 상태 :', queue)
        else:
            print('입력이 잘못됨 :', select)
