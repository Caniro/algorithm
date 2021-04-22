#include <iostream>
#include <vector>
#include <algorithm>

int		get_digit(int n)
{
	int	digit;
	
	digit = 0;
	while (n > 9)
	{
		digit++;
		n /= 10;
	}
	return (digit + 1);
}

int		main()
{
	using namespace std;
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	vector<int> num;
	int			n;
	int			len;

	cin >> n;
	len = get_digit(n);
	num.resize(len);
	for (int i = 0; i < len; ++i)
	{
		num[i] = n % 10;
		n /= 10;
	}
	sort(num.begin(), num.end());
	for (int i = len - 1; i >= 0; --i)
		cout << num[i];
}