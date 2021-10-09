# 이진 탐색 트리의 일반 구현

class TreeNode():
    def __init__(self):
        self.data = None
        self.left = None
        self.right = None

memory = []
root = None
nameAry = ['블랙핑크', '레드벨벳', '마마무', '에이핑크', '걸스데이', '트와이스']

node = TreeNode()
node.data = nameAry[0]
root = node
memory.append(node)

for name in nameAry[1:]:
    node = TreeNode()
    node.data = name

    current = root
    while True:
        if node.data < current.data:
            if current.left == None:
                current.left = node
                break
            current = current.left
        else:
            if current.right == None:
                current.right = node
                break
            current = current.right

    memory.append(node)

findName = '마마무'
# findName = '바바부'
current = root
while True:
    if findName == current.data:
        print(findName, 'has been found')
        break
    elif findName < current.data:
        if current.left == None:
            print('cannot find name :', findName)
            break
        current = current.left
    else:
        if current.right == None:
            print('cannot find name :', findName)
            break
        current = current.right
