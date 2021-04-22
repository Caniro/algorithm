#include <iostream>

int main()
{
    using namespace std;
    int    A;
    int    B;
    int    C;
    
    cin >> A >> B >> C;
    cout <<  (A+B)%C << "\n" << ((A%C) + (B%C))%C << "\n" << (A*B)%C << "\n" 
        << ((A%C) * (B%C))%C << endl;
}