// https://programmers.co.kr/learn/courses/30/lessons/42862
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int     is_near(int a, int b)
{
    if ((a == -1 || b == -1) || \
        ((a - b) < -1 || (a - b) > 1))
        return (0);
    return (1);
}

int     solution(int n, vector<int> lost, vector<int> reserve) {
    int lost_size = lost.size();
    int reserve_size = reserve.size();
    int answer = n - lost_size;

    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    for (int i = 0; i < lost_size; ++i)
        for (int j = 0; j < reserve_size; ++j)
        {
            if (is_near(lost[i], reserve[j]))
            {
                if (lost[i] == reserve[j + 1])          // ex) [2, 3], [1, 2]
                {
                    lost[i] = -1;
                    reserve[j + 1] = -1;
                }
                else if (lost[i + 1] == reserve[j])     // ex) [2, 3], [3, 4]
                {
                    lost[i + 1] = -1;
                    reserve[j] = -1;
                }
                else
                {
                    lost[i] = -1;
                    reserve[j] = -1;
                }
                answer++;
                break ;
            }
        }

    return answer;
}
