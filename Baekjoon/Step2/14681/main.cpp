#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    int    a;
    int    b;
    
    cin >> a >> b;
    if (a > 0 && b > 0)
        cout << "1";
    else if (a > 0 && b < 0)
        cout << "4";
    else if (a < 0 && b > 0)
        cout << "2";
    else if (a < 0 && b < 0)
        cout << "3";
}