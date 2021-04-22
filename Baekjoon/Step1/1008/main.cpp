#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    int    a;
    int    b;
    
    cin >> a >> b;
    cout << setprecision(13) << (double)a / (double)b << endl;
}