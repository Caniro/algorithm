// 로또의 최고 순위와 최저 순위 : https://programmers.co.kr/learn/courses/30/lessons/77484

#include <string>
#include <vector>

using namespace std;

int get_correct_number(const vector<int>& lottos, const vector<int>& win_nums)
{
    int count = 0;
    
    for (const auto& l : lottos)
    {
        if (l == 0)
            continue ;
        for (const auto& r : win_nums)
            if (l == r)
            {
                ++count;
                break ;
            }
    }
    
    return count;
}

int get_highest_rank(int correct_num, int zero_count)
{
    while (zero_count > 0)
    {
        --zero_count;
        ++correct_num;
    }
    
    return (correct_num < 2 ? 6 : 7 - correct_num);
}

int get_lowest_rank(int correct_num, int zero_count)
{
    return (correct_num < 2 ? 6 : 7 - correct_num);
}

vector<int> solution(vector<int> lottos, vector<int> win_nums)
{
    vector<int> answer;
    int correct_num;
    int zero_count = 0;
    
    for (const auto& e: lottos)
        if (e == 0)
            ++zero_count;
    correct_num = get_correct_number(lottos, win_nums);

    answer.push_back(get_highest_rank(correct_num, zero_count));
    answer.push_back(get_lowest_rank(correct_num, zero_count));
    
    return answer;
}
