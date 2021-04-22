// https://programmers.co.kr/learn/courses/30/lessons/49993

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void    initialize(int *order)
{
    for (int i = 0; i < 26; ++i)
        order[i] = -1;  // means not appearance in skill_tree
}

void    put_order(char ch, int *order, const string &skill, int i)
{
    for (int x = 0; x < skill.size(); ++x)
    {
        if (ch == skill[x])
        {
            order[(ch - 'A')] = i;
            break ;
        }
    }
}

int     is_valid_case(const string &skill, const string &skill_tree)
{
    int         len_tree;
    int         len_skill;
    char        ch;
    int         order[26];  // ABCDEFGHIJKLMNOPQRSTUVWXYZ

    initialize(order);
    len_tree = skill_tree.size();
    for (int i = 0; i < len_tree; ++i)
    {
        ch = skill_tree[i];
        put_order(ch, order, skill, i);
    }

    len_skill = skill.size();
    for (int i = 0; i < len_skill - 1; ++i)
    {
        int    current = order[(skill[i] - 'A')];
        int    next = order[(skill[i + 1] - 'A')];
        if ((current >= next) && \
             next != -1)
            return (0);
        if (current == -1 && next != -1)
            return (0);
    }
    return (1);
}

int     solution(string skill, vector<string> skill_trees) {
    int answer = 0;

    for (const auto &e : skill_trees)
        answer += is_valid_case(skill, e);

    return answer;
}
