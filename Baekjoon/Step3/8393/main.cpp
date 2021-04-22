#include <iostream>

int main()
{
    using namespace std;
    int    a;
    int    sum;
    
    cin >> a;
    sum = 0;
    for (int i = 1; i <= a; ++i)
        sum += i;
    cout << sum;
}