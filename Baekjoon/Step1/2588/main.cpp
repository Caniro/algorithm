#include <iostream>

int main()
{
    using namespace std;
    int    a;
    int    b;
    
    cin >> a >> b;
    int    first = a * (b % 10);
    int    second = a * ((b / 10) % 10);
    int    third = a * (b / 100);
    cout << first << "\n" << second << "\n" << third << "\n" << first + second * 10 + third * 100 << endl;
}