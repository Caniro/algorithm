#include <iostream>

int		facto(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else
		return (n * facto(n - 1));
}

int		main()
{
	using namespace std;
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int	N;
	cin >> N;

	cout << facto(N);
}