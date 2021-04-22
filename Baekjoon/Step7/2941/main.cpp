#include <iostream>
#include <string>

int     is_group_word()
{
    using namespace std;
    
    string  str;
    int     flag[26] = {0, };

    getline(cin, str);
    for (int i = 0; i < str.size(); ++i)
    {
        if (flag[str[i] - 'a'] == 1)
            return (0);
        if (str[i] != str[i + 1])
            flag[str[i] - 'a'] = 1;
    }
    return (1);
}

int     main()
{
    using namespace std;
    
    int     n;
    int     count;

    cin >> n;
    getchar();

    count = 0;
    for (int i = 0; i < n; ++i)
        count += is_group_word();
    cout << count;
}