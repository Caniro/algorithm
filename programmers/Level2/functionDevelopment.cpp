#include <string>
#include <vector>
#include <iostream>

using namespace std;

void        pull_vector(vector<int> &vector, int num)
{
    int len;

    if ((len = vector.size()) == 0) return;
    for (int i = 0; i < len - num; ++i)
        vector[i] = vector[num + i];
    vector.resize(len - num);
}

void        print_vector(vector<int> &vector)
{
    std::cerr << "size : " << vector.size() << "\n[";
    for (auto &e: vector)
        std::cerr << e << ", ";
    std::cerr << ']' << std::endl;
}

void        vector_sum(vector<int> &v1, const vector<int> &v2)
{
    int len;

    len = v1.size();
    if (len != v2.size()) return;
    for (int i = 0 ; i < len; ++i)
        v1[i] += v2[i];
}

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int         idx = 0;
    int         len;

    while (1)
    {
        answer.push_back(0);
        len = progresses.size();
        for (int i = 0; i < len; ++i)
        {
            if (progresses[i] >= 100)
                answer[idx]++;
            else
                break ;
        }

        pull_vector(progresses, answer[idx]);
        pull_vector(speeds, answer[idx]);
        if (answer.size() != 0 && answer[idx] == 0)
        {
            answer.pop_back();
            idx--;
        }

        vector_sum(progresses, speeds);
        idx++;
        if (progresses.size() == 0)
            break ;
    }
    return answer;
}
