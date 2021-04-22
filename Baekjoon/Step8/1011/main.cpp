#include <iostream>

void	calc(int& count,  int i, int len)
{
	if (len <= 0)
		return ;
	if (i - 1 <= len && len <= i + 1)
		count++;
	else if (len == i + 2 && i != 0)
		count += 2;
	else if (i + 2 < len && len < 2 * (i - 1))
		count += 2;
	else if (2 * (i - 1) <= len && len <= 2 * (i + 1))
		count += 2;
	else if (2 * (i + 1) + 1 < len && len < 2 * (i + 1) + i - 1)
	{
		count += 3;
	}
	else
	{
		count += 2;
		calc(count, i + 1, len - 2 * (i + 1));
	}
}

int		main()
{
	using namespace std;

	int	start_point;
	int	end_point;
	int	len;

	int T;
	cin >> T;
	
	for (int i = 0; i < T; ++i)
	{
		cin >> start_point >> end_point;
		len = end_point - start_point;
		int count;
		count = 0;
		calc(count, 0, len);
		cout << count << '\n';
	}
}