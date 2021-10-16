# 단어 수학 : https://www.acmicpc.net/problem/1339

from sys import stdin
input = stdin.readline

N = int(input().rstrip())
words = []
alpha_set = set()
for i in range(N):
    word = input().rstrip()
    words.append(word)
    for alpha in word:
        alpha_set.add(alpha)
words.sort(key=lambda word: len(word), reverse=True)
print(alpha_set)

print(words)
