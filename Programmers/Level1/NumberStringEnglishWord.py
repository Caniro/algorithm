# 숫자 문자열과 영단어 : https://programmers.co.kr/learn/courses/30/lessons/81301?language=python3
def solution(s):
    answer = s.replace('one', '1') \
              .replace('two', '2') \
              .replace('three', '3') \
              .replace('four', '4') \
              .replace('five', '5') \
              .replace('six', '6') \
              .replace('seven', '7') \
              .replace('eight', '8') \
              .replace('nine', '9') \
              .replace('zero', '0')
    
    return int(answer)
