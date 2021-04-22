#include <iostream>

int main()
{
	using namespace std;
	int	n;

	cin >> n;
	if (n == 1000)
	{
		cout << 144;
		return (0);
	}
	if (n < 100)
	{
		cout << n;
		return (0);
	}
	int	count = 99;
	for (int i = 100; i <= n; ++i)
	{
		int	a = i / 100;
		int	b = (i / 10) % 10;
		int	c = i % 10;
		if ((a - b) == (b - c))
			count++;
	}
	cout << count;
}