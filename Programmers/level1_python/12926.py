# 시저 암호 : https://programmers.co.kr/learn/courses/30/lessons/12926

def solution(s, n):
    words = []

    for char in s:
        if char >= 'a' and char <= 'z':
            limit = 'z'
        elif char >= 'A' and char <= 'Z':
            limit = 'Z'

        if char != ' ':
            new_char = chr(ord(char) + n)
            if new_char > limit:
                new_char = chr(ord(new_char) - (ord('z') - ord('a') + 1))
        else:
            new_char = char
        words.append(new_char)

    return ''.join(words)

# .isalpha(), .isupper(), .islower() 함수 기억해둘 것

def solution1(s, n):
    words = []

    for char in s:
        limit = 'Z' if char.isupper() else 'z'

        if char.isalpha():
            new_char = chr(ord(char) + n)
            if new_char > limit:
                new_char = chr(ord(new_char) - (ord('z') - ord('a') + 1))
        else:
            new_char = char
        words.append(new_char)

    return ''.join(words)
