# 그래프의 기본

class Graph():
    def __init__(self, size):
        self.SIZE = size
        self.graph = [ [0 for _ in range(size)] for _ in range(size) ]

G1 = Graph(4)
G1.graph[0][1] = 1
G1.graph[0][2] = 1
G1.graph[0][3] = 1
G1.graph[1][0] = 1
G1.graph[1][2] = 1

for row in range(4):
    for col in range(4):
        print(G1.graph[row][col], end=' ')
    print()
