#include <iostream>

int main()
{
	using namespace std;

    int    arr[9];
    int    max, idx;
    
    for (int i = 0; i < 9; ++i)
        cin >> arr[i];
    max = 0;
    idx = 0;
    for (int i = 0; i < 9; ++i)
    {
        if (max < arr[i])
        {
            max = arr[i];
            idx = i;
        }
    }
    cout << max << '\n' << idx + 1;
}