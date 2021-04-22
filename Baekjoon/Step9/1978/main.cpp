#include <iostream>

int is_prime(void)
{
	int	n;
	int i;
	
	std::cin >> n;
	i = 1;
	if (n <= 1)
		return (0);
	while (++i <= n / 2)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}

int main()
{
	using namespace std;

	int N, count;
	cin >> N;

	count = 0;
	for (int i = 0; i < N; ++i)
		count += is_prime();
	cout << count;
}