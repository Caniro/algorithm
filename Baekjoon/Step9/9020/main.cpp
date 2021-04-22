#include <iostream>
#include <cmath>
#include <vector>

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
	int	T;
	cin >> T;
	
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	for (int iter = 0; iter < T; ++iter)
	{
		int	n, idx, order;
		cin >> n;
		if (n % 2)
			continue ;
		
		for (int i = n / 2; i >= 2; --i)
			if (is_prime(i) && is_prime(n - i))
			{
				if (i < n - i)
					cout << i << ' ' << n - i << '\n';
				else
					cout << n - i << ' ' << i << '\n';
				break;
			}
	}
}