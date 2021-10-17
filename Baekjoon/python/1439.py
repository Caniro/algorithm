# 뒤집기 : https://www.acmicpc.net/problem/1439

S = input()
string_list = []
if len(S) == 0:
    pass
else:
    string_list.append(S[0])
    for char in S[1:]:
        if string_list[-1] != char:
            string_list.append(char)

print(len(string_list) // 2)
