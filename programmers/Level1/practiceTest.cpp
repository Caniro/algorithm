// https://programmers.co.kr/learn/courses/30/lessons/42840
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

/*
    정답이 인덱스 i에 대하여
    1번은 5로 나눴을 때 나머지 + 1 // (i % 5 + 1)
    2번은 짝수면 2, 홀수면 8로 나눴을 때 나머지가 (1이면 1), (3이면 3), (5이면 4), (7이면 5)
    3번은 10으로 나눴을 때의 나머지를 2로 나눴을 때의 몫이 (0이면 3), (1이면 1), (2이면 2), (3이면 4), (4이면 5)
*/

vector<int> diff_each_other(int first, int second, int third)
{
    if (first > second)
    {
        if (second > third || first > third)
            return (vector<int>({1}));
        return (vector<int>({3}));
    }
    if (first > third)
    {
        if (third > second || first > second)
            return (vector<int>({1}));
        return (vector<int>({2}));
    }
    if (second > third)
    {
        if (third > first || second > first)
            return (vector<int>({2}));
        return (vector<int>({1}));
    }
    return (vector<int>({3}));
}

vector<int> get_answer(int first, int second, int third)
{
    if ((first == second) && (first == third))
        return (first == 0 ? vector<int>({}) : vector<int>({1, 2, 3}));
    if (first == second)
        return (first > third ? vector<int>({1, 2}) : vector<int>({3}));
    else if (second == third)
        return (first > third ? vector<int>({1}) : vector<int>({2, 3}));
    else if (first == third)
        return (first > second ? vector<int>({1, 3}) : vector<int>({2}));
    return (diff_each_other(first, second, third));
}

vector<int> solution(vector<int> answers) {
    int         first = 0;
    int         second = 0;
    int         third = 0;

    for (int i = 0; i < answers.size(); ++i)
    {
        int answer = answers[i];

        if (answer == ((i % 5) + 1))
            first++;
        if (((i % 2) == 0 && answer == 2) || \
            ((i % 8) == 1 && answer == 1) || \
            ((i % 8) == 3 && answer == 3) || \
            ((i % 8) == 5 && answer == 4) || \
            ((i % 8) == 7 && answer == 5))
            second++;
        if ((((i % 10) / 2) == 0 && answer == 3) || \
            (((i % 10) / 2) == 1 && answer == 1) || \
            (((i % 10) / 2) == 2 && answer == 2) || \
            (((i % 10) / 2) == 3 && answer == 4) || \
            (((i % 10) / 2) == 4 && answer == 5))
            third++;
    }
    return get_answer(first, second, third);
}
