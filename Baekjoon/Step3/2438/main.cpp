#include <iostream>

int main()
{
    using namespace std;

    int T;
    
    cin >> T;
    for (int i = 1 ; i <= T; ++i)
    {
        for (int j = 1; j <= i; ++j)
            cout << "*";
        cout << "\n";
    }
}