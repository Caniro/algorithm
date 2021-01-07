// https://programmers.co.kr/learn/courses/30/lessons/42587

#include <string>
#include <vector>

using namespace std;

/*
    1. 큐의 첫 번째 요소를 save에 저장
    2. save를 나머지 요소와 비교
        2-1. save보다 큰 요소가 존재하면 push_flag=true 설정
    3. 큐를 앞으로 땡기기
        3-1. 큐의 크기 - 1로 resize
        3-2. location을 1 뺌
    4. push_flag
        4-1. true이면 맨 뒤에 save를 push_back
            - location < 0 이면 location = 큐의 크기 - 1 (맨 뒤)
        4-2. false이면 큐에서 꺼낸거니까 answer++;
            - location < 0 이면 요청한 요소를 꺼낸 것이므로 break ;
    5. 4-2가 나올 때까지 무한루프
    6. answer 반환
*/

void    pull_queue(vector<int> &queue, int &location)
{
    int     len = queue.size();

    for (int i = 0; i < len - 1; ++i)
        queue[i] = queue[i + 1];
    queue.resize(len - 1);
    --location;
}

bool    compare_priorities(const vector<int> &queue, const int &save)
{
    for (const auto &e: queue)
        if (save < e)
            return (true);
    return (false);
}

int    calc_order(vector<int> &queue, int location)
{
    int answer = 0;
    int save;
    int push_flag = false;

    while (1)
    {
        save = queue[0];
        push_flag = compare_priorities(queue, save);
        pull_queue(queue, location);
        if (push_flag)
        {
            queue.push_back(save);
            if (location < 0)
                location = queue.size() - 1;
        }
        else
        {
            answer++;
            if (location < 0)
                break ;
        }
    }
    return (answer);
}

int     solution(vector<int> priorities, int location) {
    return (calc_order(priorities, location));
}
