#include <iostream>

int main()
{
    using namespace std;
    int    a;
    
    cin >> a;
    for (int i = 1; i < 10; ++i)
        cout << a << " * " << i << " = " << a * i << endl;
}