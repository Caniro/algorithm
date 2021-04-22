#include <iostream>

int main()
{
    using namespace std;
    int    T;
    int    a;
    int    b;
    
    cin >> T;
    for (int i = 0; i < T; ++i)
    {
        cin >> a >> b;
        cout << a + b << endl;
    }
}