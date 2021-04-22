#include <iostream>

int		is_prime(int n)
{
	if (n == 1)
		return (0);
	for (int i = 2; i <= n / 2; ++i)
		if (n % i == 0)
			return (0);
	return (1);
}

int		main()
{
	using namespace std;

	int	a, b, sum, min;
	cin >> a >> b;

	sum = 0;
	min = 0;
	for (int i = a; i <= b; ++i)
	{
		if (is_prime(i))
		{
			sum += i;
			if (min == 0)
				min = i;
		}
	}
	if (sum == 0)
		cout << -1;
	else
		cout << sum << '\n' << min;
}