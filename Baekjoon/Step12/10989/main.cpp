#include <iostream>

int		main()
{
	using namespace std;
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	int* count = new int[10001];


	for (int i = 0; i < 10001; ++i)
		count[i] = 0;

	int tmp;
	for (int i = 0; i < n; ++i)
	{
		cin >> tmp;
		count[tmp]++;
	}

	for (int i = 0; i < 10001; ++i)
	{
		int	iter;
		iter = count[i];
		while (iter-- > 0)
			cout << i << '\n';
	}

	delete[] count;
}