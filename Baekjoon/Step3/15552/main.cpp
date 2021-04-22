#include <iostream>

int main()
{
    using namespace std;
    int    T;
    int    a;
    int    b;
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> T;
    for (int i = 0; i < T; ++i)
    {
        cin >> a >> b;
        cout << a + b << "\n";
    }
}