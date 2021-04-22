#include <iostream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b;
    cin >> a >> b;
    while(a || b)
    {
        cout << a + b << "\n";
        a = b = 0;
        cin >> a >> b;
    }
}