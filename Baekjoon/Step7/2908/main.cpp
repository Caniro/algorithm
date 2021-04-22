#include <iostream>

int main()
{
    using namespace std;
    
    int     a, b, c;

    cin >> a >> b;
    if (a % 10 > b % 10)
        c = a;
    else if (a % 10 < b % 10)
        c = b;
    else
    {
        if ((a / 10) % 10 > (b / 10) % 10)
            c = a;
        else if ((a / 10) % 10 < (b / 10) % 10)
            c = b;
        else
        {
            if (a / 100 > b / 100)
                c = a;
            else
                c = b;
        }
    }
    cout << c % 10 << (c / 10) % 10 << c / 100;
}