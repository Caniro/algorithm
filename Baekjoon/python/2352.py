# 반도체 설계 : https://www.acmicpc.net/problem/2352

from sys import stdin
input = stdin.readline

n = int(input().rstrip())
ports = [0] + [int(num) for num in input().rstrip().split()]

