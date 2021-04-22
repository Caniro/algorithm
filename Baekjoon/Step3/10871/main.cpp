#include <iostream>

int main()
{
    using namespace std;
    
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int num_arr;
    int number;
    int temp;
    
    cin >> num_arr >> number;
    
    for (int i = 0 ; i < num_arr; ++i)
    {
        cin >> temp;
        if (temp < number)
        {
            cout << temp;
            cout << " ";
        }
    }
}