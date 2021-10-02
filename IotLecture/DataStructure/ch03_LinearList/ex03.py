# 선형 리스트 예제

def add_data(data):
    data_list.append(None)
    kLen = len(data_list)
    data_list[kLen - 1] = data

def insert_data(idx, data):
    data_list.append(None)
    kLen = len(data_list)
    for i in range(kLen - 1, idx, -1):
        data_list[i] = data_list[i - 1]
        data_list[i - 1] = None
    data_list[idx] = data

def delete_data(idx):
    kLen = len(data_list)
    data_list[idx] = None
    for i in range(idx + 1, kLen, 1):
        data_list[i - 1] = data_list[i]
        data_list[i] = None
    del(data_list[kLen - 1])

data_list = []
select = -1

if __name__ == '__main__':
    while (select != 4):
        select = int(input('선택하세요(1: 추가, 2: 삽입, 3: 삭제, 4: 종료)-->'))

        if select == 1:
            data = input('추가할 데이터-->')
            add_data(data)
            print(data_list)
        elif select == 2:
            idx = int(input('삽입할 위치-->'))
            data = input('추가할 데이터-->')
            insert_data(idx, data)
            print(data_list)
        elif select == 3:
            idx = int(input('삭제할 위치-->'))
            delete_data(idx)
            print(data_list)
        elif select == 4:
            print(data_list)
            exit
        else:
            print('1~4 중 하나를 입력하세요')
            continue
