# ex01 함수화

def add_data(person):
    friends.append(None)
    kLen = len(friends)
    friends[kLen - 1] = person

def insert_data(idx, person):
    friends.append(None)
    kLen = len(friends)
    for i in range(kLen - 1, idx, -1):
        friends[i] = friends[i - 1]
        friends[i - 1] = None
    friends[idx] = person

def delete_data(idx):
    kLen = len(friends)
    friends[idx] = None
    for i in range(idx + 1, kLen, 1):
        friends[i - 1] = friends[i]
        friends[i] = None
    del(friends[kLen - 1])

friends = []
add_data('다연')
add_data('정연')
add_data('쯔위')
add_data('사나')
add_data('지효')
print(friends)

# 친구 추가(모모를 5등)
add_data('모모')
print(friends)

# 친구 삽입(미나를 3등)
insert_data(3, '미나')
print(friends)

# 친구 삭제(4등 사나 삭제)
delete_data(4)
print(friends)
