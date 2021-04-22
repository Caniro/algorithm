#include <iostream>

int    main()
{
	using namespace std;

	int	n;
	int sum;
	int	tmp;

	cin >> n;
	getchar();
	sum = 0;
	for (int i = 0; i < n; ++i)
	{
		tmp = getchar() - '0';
		sum += tmp;
	}
	cout << sum;
}