# UCPC는 무엇의 약자일까? : https://www.acmicpc.net/problem/15904

string = input()
to_find = 'UCPC'
idx = 0

for ch in string:
    if ch == to_find[idx]:
        idx += 1
        if idx == len(to_find):
            print(f'I love {to_find}')
            exit()

print(f'I hate {to_find}')
