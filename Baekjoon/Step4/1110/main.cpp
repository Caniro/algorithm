#include <iostream>

int main()
{
    using namespace std;
    
    int    n;
    int    count;
    int    new_n;
    
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    new_n = (n % 10) * 10 + ((n / 10) + (n % 10)) % 10;
    count = 1;
    while (n != new_n)
    {
        new_n = (new_n % 10) * 10 + ((new_n / 10) + (new_n % 10)) % 10;
        count++;
    }
    cout << count;
}