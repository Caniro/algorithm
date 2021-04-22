#include <iostream>

int main()
{
	int N;

	using namespace std;

	cin >> N;

	int den5, num, den3;

	den5 = N / 5;
	num = N % 5;
	den3 = num / 3;
	if (num % 3 == 0)
		cout << den5 + den3;
	else
	{
		while (den5)
		{
			den5--;
			num += 5;
			den3 = num / 3;
			if (num % 3 == 0)
			{
				cout << den5 + den3;
				return (0);
			}
		}
		if (num % 3)
			cout << -1;
		else
			cout << den3;
	}
}