#include <string>
#include <vector>
#include <iostream>

using namespace std;

void    print_wait_and_crossing(const vector<int> &truck_weights, \
                                const vector<int> &queue)
{
    for (auto &e: truck_weights)
        cerr << e << ' ';
    cerr << "\t\t";
    for (auto &e: queue)
        cerr << e << ' ';
    cerr << '\n';
}

int     solution(int bridge_length, int limit, vector<int> truck_weights) {
    int         time = 0;
    int         sum = 0;
    vector<int> queue;
    vector<int> left_length;

    while (truck_weights.size() || queue.size())
    {
        if (left_length.size() && (left_length[0] <= 0))
        {
            sum -= queue[0];
            queue.erase(queue.begin());
            left_length.erase(left_length.begin());
        }
        if (truck_weights.size() && (sum + truck_weights[0] <= limit))
        {
            sum += truck_weights[0];
            queue.push_back(truck_weights[0]);
            truck_weights.erase(truck_weights.begin());
            left_length.push_back(bridge_length);
        }
        for (auto &e: left_length)
            e--;
        time++;
        print_wait_and_crossing(truck_weights, queue);
    }
    return time;
}
