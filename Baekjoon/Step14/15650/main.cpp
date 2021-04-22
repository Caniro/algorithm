#include <iostream>
#include <vector>

class Data
{
public:
    int                 n;
    int                 m;
    int                 depth;
    std::vector<int>    flag;
    std::vector<int>    arr;
};


void    combination(Data a)
{
    int                 check;
    std::vector<int>    next_idx;
    Data                tmp;

    check = 0;
    if (a.depth >= a.m)
    {
        for (int i = 0; i < a.m; ++i)
        {
            std::cout << a.arr[i];
            if (i != a.m - 1)
                std::cout << ' ';
        }
        std::cout << '\n';
        return ;
    }
    else
    {
        for (int i = 0; i < a.n; ++i)
            if (a.flag[i] == 0)
            {
                next_idx.push_back(i);
                check = 1;
            }
    }
    if (check == 0)
        return ;
    for (auto &e : next_idx)
    {
        tmp = a;
        if (!tmp.arr.empty() && tmp.arr.back() > e)
            continue;
        tmp.arr.push_back(e + 1);
        tmp.flag[e] = 1;
        tmp.depth++;
        combination(tmp);
    }
}

int     main()
{
    using namespace std;
	cin.tie(NULL);
	ios::sync_with_stdio(false);

    Data    a;

    cin >> a.n >> a.m;
    a.flag.resize(a.n);
    a.depth = 0;
    combination(a);
}