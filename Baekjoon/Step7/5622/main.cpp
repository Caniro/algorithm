#include <iostream>

int main()
{
    using namespace std;
    
    char    ch;
    int     quotient;
    int     time = 0;

    while ((ch = getchar()) != '\n')
    {
        quotient = (ch + 1) / 3;
        if (quotient == 22)
            time += 2 + 1;
        else if (quotient == 23)
            time += 3 + 1;
        else if (quotient == 24)
            time += 4 + 1;
        else if (quotient == 25)
            time += 5 + 1;
        else if (quotient == 26)
            time += 6 + 1;
        else if (ch == 'P' || ch == 'Q' || ch == 'R' || ch == 'S')
            time += 7 + 1;
        else if (ch == 'T' || ch == 'U' || ch == 'V')
            time += 8 + 1;
        else
            time += 9 + 1;
    }
    cout << time;
}