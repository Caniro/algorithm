// https://programmers.co.kr/learn/courses/30/lessons/42748
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void        add_answer(vector<int> &array, vector<int> &c, vector<int> &answer)
{
    vector<int> buf;

    for (int i = c[0] - 1; i < c[1]; ++i)
        buf.push_back(array[i]);
    sort(buf.begin(), buf.end());
    answer.push_back(buf[c[2] - 1]);
}

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    for (auto c : commands)
        add_answer(array, c, answer);
    return answer;
}
