#include <iostream>
#include <cmath>

int		is_prime(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	else if (n == 4)
		return (0);
	for (int i = 2; i <= std::sqrt(n); ++i)
		if (n % i == 0)
			return (0);
	return (1);
}

int		main()
{
	using namespace std;

	int	a, b;
	cin >> a >> b;

	for (int i = a; i <= b; ++i)
	{
		if (is_prime(i))
			cout << i << '\n';
	}
}