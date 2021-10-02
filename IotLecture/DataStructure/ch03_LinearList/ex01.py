# 선형 리스트의 기본

friends = ['다현', '정연', '쯔위', '사나', '지효']
print(friends)

# 친구 추가(모모를 5등)
friends.append(None)
friends[5] = '모모'
print(friends)

# 친구 삽입(미나를 3등)
friends.append(None)
friends[6] = friends[5]
friends[5] = None
friends[5] = friends[4]
friends[4] = None
friends[4] = friends[3]
friends[3] = None
friends[3] = '미나'
print(friends)

# 친구 삭제(4등 사나 삭제)
friends[4] = None
friends[4] = friends[5]
friends[5] = None
friends[5] = friends[6]
friends[6] = None
# friends.pop()
del(friends[6])
print(friends)
