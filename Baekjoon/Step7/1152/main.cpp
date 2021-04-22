#include <iostream>
#include <string>

int main()
{
    using namespace std;
    
    char    pre_ch;
    char    ch;
    int     count = 1;

    while ((ch = getchar()) == ' ')
        ;
    if (ch == '\n')
    {
        cout << 0;
        return (0);
    }
    while ((ch = getchar()) != '\n')
    {
        if (ch == ' ')
            count++;
        pre_ch = ch;
    }
    if (pre_ch == ' ')
        count--;
    cout << count;
}