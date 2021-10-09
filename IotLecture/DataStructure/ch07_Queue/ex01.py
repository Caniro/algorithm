# 큐의 기본

SIZE = 5
queue = [ None for _ in range(SIZE) ]
front = -1
rear = -1

# 삽입
rear += 1
queue[rear] = '화사'
rear += 1
queue[rear] = '솔라'
rear += 1
queue[rear] = '은별'
print('출구<--', queue, '<--입구')

# 추출
front += 1
data = queue[front]
queue[front] = None
print('추출 :', data)

front += 1
data = queue[front]
queue[front] = None
print('추출 :', data)

front += 1
data = queue[front]
queue[front] = None
print('추출 :', data)
print('출구<--', queue, '<--입구')
