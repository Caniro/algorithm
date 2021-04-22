#include <iostream>

int main()
{
    using namespace std;

    int T;
    int a;
    int b;
    
    cin >> T;
    for (int i = 1 ; i <= T; ++i)
    {
        cin >> a >> b;
        cout << "Case #" << i << ": " << a + b << "\n";
    }
}