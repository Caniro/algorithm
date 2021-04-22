#include <iostream>

int main()
{
    using namespace std;
    int     iter;


    int     num;
    char    ch;

    cin >> iter;
    for (int j = 0; j < iter; ++j)
    {
        cin >> num;
        getchar();
        while ((ch = getchar()) != '\n')
        {
            for (int i = 0; i < num; ++i)
                cout << ch;
        }
        cout << '\n';
    }
}