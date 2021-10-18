# 소가 길을 건너간 이유 2 : https://www.acmicpc.net/problem/14468

routes = input()
appear_once = [0] * 26

count = 0
for i in range(len(routes)):
    ch = routes[i]
    for j in range(i + 1, len(routes)):
        if ch == routes[j]:
            break
        appear_once[ord(routes[j]) - ord('A')] ^= 1
    print(appear_once)
    for i in range(len(appear_once)):
        if appear_once[i]:
            count += 1
            appear_once[i] = 0

print(count // 2)

'''
ABCBCA
'''
