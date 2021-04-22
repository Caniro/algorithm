#include <iostream>

int		main()
{
	using namespace std;
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	
	for (int i = 1; i < n; ++i)
		if ((i + i % 10 + (i % 100) / 10 + (i % 1000) / 100 + (i % 10000) / 1000 + (i % 100000) / 10000) + i / 100000 == n)
		{
			cout << i;
			return (0);
		}
	cout << 0;
}