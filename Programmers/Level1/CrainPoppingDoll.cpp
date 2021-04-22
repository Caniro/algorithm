// https://programmers.co.kr/learn/courses/30/lessons/64061
#include <string>
#include <vector>

using namespace std;

int        pop(vector<vector<int>> &board, int pop_location)
{
    for (auto &row : board)
    {
        int     num;

        if (!(num = row[pop_location - 1]))
            continue ;
        row[pop_location - 1] = 0;
        return (num);
    }
    return (-1);
}

int         solution(vector<vector<int>> board, vector<int> moves) {
    int         answer = 0;
    vector<int> stack;

    for (const auto &pop_location : moves)
    {
        int new_doll = pop(board, pop_location);
        if (new_doll != -1)
            stack.push_back(new_doll);
        int size;
        if ((size = stack.size()) <= 1)
            continue ;
        if (stack[size - 1] == stack[size - 2])
        {
            stack.pop_back();
            stack.pop_back();
            answer += 2;
        }
    }
    return answer;
}
