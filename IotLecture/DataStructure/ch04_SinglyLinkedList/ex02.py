# 단순 연결 리스트의 일반 구현

class Node():
    def __init__(self):
        self.data = None
        self.link = None

def printNodes(start):
    current = start
    while current.link:
        print(current.data, end=' ')
        current = current.link
    print(current.data)

def insertNode(findData, insertData):
    global memory, head, current, pre

    if findData == head.data:
        node = Node()
        node.data = insertData
        node.link = head
        head = node
        memory.append(node)
        return

    current = head
    while current.link:
        pre = current
        current = current.link
        if current.data == findData:
            node = Node()
            node.data = insertData
            node.link = current
            pre.link = node
            memory.append(node)
            return

    node = Node()
    node.data = insertData
    current.link = node
    memory.append(node)

def deleteNode(deleteData):
    global memory, head, current, pre

    if deleteData == head.data:
        current = head
        head = head.link
        del(current)
        return

    current = head
    while current.link:
        pre = current
        current = current.link
        if current.data == deleteData:
            pre.link = current.link
            del(current)
            return

def findNode(findData):
    global memory, head, current, pre
    current = head
    if current.data == findData:
        return current
    while current.link:
        current = current.link
        if current.data == findData:
            return current
    return Node()

memory = []
head, current, pre = None, None, None
dataArray = ['다현', '정연', '쯔위', '사나', '지효']

node = Node()
node.data = dataArray[0]
head = node
memory.append(node)

for data in dataArray[1:]:
    pre = node
    node = Node()
    node.data = data
    pre.link = node
    memory.append(node)
printNodes(head)

insertNode('다현', '화사')
printNodes(head)

insertNode('사나', '솔라')
printNodes(head)

insertNode('재남', '문별')
printNodes(head)

deleteNode('화사')
printNodes(head)

deleteNode('솔라')
printNodes(head)

deleteNode('문별')
printNodes(head)

print(findNode('쯔위').data)
print(findNode('문별').data)
