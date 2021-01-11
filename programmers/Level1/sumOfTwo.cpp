/* #include <string>
#include <vector>
#include <iostream>

using namespace std;

void        swap_by_index(vector<int> &v, int a, int b)
{
    int     tmp;

    tmp = v[a];
    v[a] = v[b];
    v[b] = tmp;
}

void        ssort(vector<int> &v)       // selection sort
{
    int len = v.size();
    int min_idx;
    int min;

    for (int i = 0; i < len - 1; ++i)
    {
        min_idx = i;
        min = v[i];
        for (int j = i + 1; j < len; ++j)
        {
            if (v[min_idx] > v[j])
            {
                min_idx = j;
                min = v[j];
            }
        }
        if (i != min_idx) swap_by_index(v, i, min_idx);
    }
}

void        get_answer(vector<int> &numbers, vector<int> &answer)
{
    int         len;
    int         num;
    int         push_flag;

    len = numbers.size();
    for (int i = 0; i < len; ++i)
        for (int j = i + 1; j < len; ++j)
        {
            push_flag = true;
            if (i == j) continue ;      // avoid self-sum
            num = numbers[i] + numbers[j];
            for (auto &e: answer)
                if (e == num)
                {
                    push_flag = false;
                    break ;
                }
            if (push_flag) answer.push_back(num);
        }
}

vector<int> solution(vector<int> numbers)
{
    vector<int> answer;

    get_answer(numbers, answer);
    ssort(answer);
    return answer;
}
 */






/*
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void        get_answer(vector<int> &numbers, vector<int> &answer)
{
    int         len;
    int         num;
    int         push_flag;

    len = numbers.size();
    for (int i = 0; i < len; ++i)
        for (int j = i + 1; j < len; ++j)
        {
            push_flag = true;
            if (i == j) continue ;      // avoid self-sum
            num = numbers[i] + numbers[j];
            for (auto &e: answer)
                if (e == num)
                {
                    push_flag = false;
                    break ;
                }
            if (push_flag) answer.push_back(num);
        }
}

vector<int> solution(vector<int> numbers)
{
    vector<int> answer;

    get_answer(numbers, answer);
    sort(answer.begin(), answer.end());
    return answer;
}
 */






#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(vector<int> numbers)
{
    vector<int> answer;
	set<int>	tmp;
    int         len;

    len = numbers.size();
    for (int i = 0; i < len; ++i)
        for (int j = i + 1; j < len; ++j)
            tmp.insert(numbers[i] + numbers[j]);
	for (auto &e : tmp)
		answer.push_back(e);
    return answer;
}
