#include <iostream>

int    main()
{
    using namespace std;
    
    int A,B,C, res;
    int flag[10] = {0, };
    
    cin >> A >> B >> C;
    res = A * B * C;
    if (res == 0)
        flag[0] = 1;
    else
    {
        while (res / 10)
        {
            flag[res % 10]++;
            res /= 10;
        }
        flag[res]++;
    }
    for (int i = 0; i < 10; ++i)
    {
        cout << flag[i];
        if (i != 9)
            cout << '\n';
    }
}