// https://programmers.co.kr/learn/courses/30/lessons/42576
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    std::sort(participant.begin(), participant.end());
    std::sort(completion.begin(), completion.end());
    int len = completion.size();
    for (int i = 0; i < len; ++i)
        if (completion[i] != participant[i])
            return (participant[i]);
    return (participant[len]);
}
