#include <iostream>
#include <string>

int     main()
{
    using namespace std;

    string  str;
    char    ch1;
    char    ch2;
    char    ch3;
    int     size;
    int     count = 0;

    getline(cin, str);
    size = str.size();
    for (int i = 0 ; i < size; ++i)
    {
        ch1 = ch2 = ch3 = 0;
        ch1 = str[i];
        if (i < size - 1)
            ch2 = str[i + 1];
        if (i < size - 2)
            ch3 = str[i + 2];
        if (ch1 == 'c')
        {
            if (ch2 == '=' || ch2 == '-')
            {
                count++;
                i++;
                continue;
            }
            else
            {
                count++;
                continue;
            }
        }
        else if (ch1 == 'l' || ch1 == 'n')
        {
            if (ch2 == 'j')
            {
                count++;
                i++;
                continue;
            }
            else
            {
                count++;
                continue;
            }
        }
        else if (ch1 == 's' || ch1 == 'z')
        {
            if (ch2 == '=')
            {
                count++;
                i++;
                continue;
            }
            else
            {
                count++;
                continue;
            }
        }
        else if (ch1 == 'd')
        {
            if (ch2 == 'z')
            {
                if (ch3 == '=')
                {
                    i += 2;
                    count++;
                    continue ;
                }
                else
                {
                    count++;
                    continue ;
                }
            }
            else if (ch2 == '-')
            {
                i++;
                count++;
                continue;
            }
            else
            {
                count++;
            }
        }
        else
        {
            count++;
        }
        
    }

    cout << count;

}