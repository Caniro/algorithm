# 게임 개발

NORTH = 0
EAST = 1
SOUTH = 2
WEST = 3

SEA = 1
VISITED = 1

velocity = ((-1, 0), (0, 1), (1, 0), (0, -1))

class User:
    def __init__(self, x, y, dir):
        self.x = x
        self.y = y
        self.dir = dir
        self.visit_count = 1
        self.try_count = 0

    def turn_left(self):
        self.dir = (self.dir + 3) % 4

    def go(self):
        global world, visited

        nx, ny = (self.x + velocity[self.dir][0], self.y + velocity[self.dir][1])
        if world[nx][ny] == SEA or visited[nx][ny] == VISITED:
            self.try_count += 1
            return

        self.x, self.y = nx, ny
        visited[self.x][self.y] = VISITED
        self.visit_count += 1
        self.try_count = 0
    
    def check_try(self):
        if (self.try_count >= 4):
            return self.go_back()
        return False

    def go_back(self):
        global world

        nx, ny = (self.x - velocity[self.dir][0], self.y - velocity[self.dir][1])
        if world[nx][ny] == SEA:
            return True
        self.x, self.y = nx, ny
        self.try_count = 0
        return False

n, m = map(int, input('').split())
x, y, dir = map(int, input('').split())
user = User(x, y, dir)
world = []
for _ in range(n):
    row = list(map(int, input('').split()))
    world.append(row)
visited = [row.copy() for row in world]
visited[x][y] = VISITED

while True:
    if user.check_try():
        break
    user.turn_left()
    user.go()

print(user.visit_count)
