#include <iostream>
#include <string>

int main()
{
    class mapping
    {
    public:
        char    ch = 0;
        int     order;
        int     count = 0;
    };

    using namespace std;

    string  str;
    int     idx = 1;
    mapping m[26];

    getline(cin, str);
    for (int i = 0; i < str.size(); ++i)
    {
        for (int j = 0; j < 26; ++j)
        { 
            if (m[j].ch == toupper(str[i]))
            {
                m[j].count++;
                break ;
            }
            else if (m[j].ch == 0)
            {
                m[j].ch = toupper(str[i]);
                m[j].order = idx++;
                m[j].count++;
                break ;
            }
        }
    }
    if (m[0].ch == 0)
        return (-1);
    idx = 0;
    int     total = 1;
    for (int i = 0; i < 26; ++i)
        if (m[i].ch && i != idx)
        {
            if (m[i].count > m[idx].count)
            {
                idx = i;
                total = 1;
            }
            else if (m[i].count == m[idx].count)
                total++;
        }
    if (total == 1)
        cout << m[idx].ch;
    else
        cout << '?';
}