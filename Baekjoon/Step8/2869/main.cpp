#include <iostream>

int main()
{
	using namespace std;
	
	int A, B, V;
	cin >> A >> B >> V;

	int day;
	day = (V - A) / (A - B);
	if (V <= (A - B) * day + A)
		cout << day + 1;
	else if (V <= (A - B) * (day + 1) + A)
		cout << day + 2;
}