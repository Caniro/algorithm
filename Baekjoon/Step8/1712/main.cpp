#include <iostream>

int main()
{
	int A, B, C;

	using namespace std;

	cin >> A >> B >> C;

	if (C <= B)
		cout << -1;
	else
		cout << A / (C - B) + 1;
}