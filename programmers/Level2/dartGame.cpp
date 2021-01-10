// https://programmers.co.kr/learn/courses/30/lessons/17682
#include <string>

using namespace std;

int ft_atoi(const char *s, int &idx)
{
    int num = 0;

    while (s[idx] >= '0' && s[idx] <= '9')
        num = num * 10 + s[idx++] - '0';
    return (num);
}

int get_number(const string &dartResult, int &idx, int *pre_num)
{
    int num;

    num = ft_atoi(dartResult.c_str(), idx);
    if (dartResult[idx] == 'D')
        num *= num;
    else if (dartResult[idx] == 'T')
        num *= num * num;
    if (dartResult[++idx] == '*')
    {
        if (pre_num) *pre_num *= 2;
        num *= 2;
        idx++;
    }
    else if (dartResult[idx] == '#')
    {
        num *= -1;
        idx++;
    }
    return (num);
}

int solution(string dartResult)
{
    int idx = 0;
    int first = get_number(dartResult, idx, nullptr);
    int second = get_number(dartResult, idx, &first);
    int third = get_number(dartResult, idx, &second);

    return (first + second + third);
}
