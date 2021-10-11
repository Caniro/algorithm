# 잃어버린 괄호 : https://www.acmicpc.net/problem/1541

numbers_str = input().split('-')
numbers = []
for expr in numbers_str:
    expression = ''
    for num_str in expr.split('+'):
        expression += '+' + num_str.lstrip('0')
    numbers.append(eval(expression))

total = numbers[0]
for i in range(1, len(numbers)):
    total -= numbers[i]

print(total)
