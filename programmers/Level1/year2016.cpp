// https://programmers.co.kr/learn/courses/30/lessons/12901
#include <string>
#include <vector>

using namespace std;

int     month_to_day(int *last, int month)
{
    int     sum = 0;

    for (int i = 0; i < month - 1; ++i)
        sum += last[i];
    return (sum);
}

string  solution(int a, int b) {
    int     last_day[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string  weeks[7] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    int     days = 0;

    days = month_to_day(last_day, a);
    days += b - 1;
    return weeks[days % 7];
}
