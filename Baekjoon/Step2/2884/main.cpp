#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    int    a;
    int    b;
    
    cin >> a >> b;
    if (b >= 45)
        cout << a << " " << b - 45;
    else if (a == 0)
        cout << "23" << " " << b + 15;
    else
        cout << a - 1 << " " << b + 15;        
}