#include <iostream>

int	get_line(int n)
{
	int i;

	i = 1;
	while ((n -= i) > 0)
		i++;
	return (i);
}

int main()
{
	using namespace std;

	int n;
	cin >> n;

	if (n == 1)
	{
		cout << "1/1";
		return (0);
	}
	int line, pre_sum;
	line = get_line(n);
	pre_sum = 0;
	for (int i = 1; i < line; ++i)
		pre_sum += i;
	
	int order;
	order = n - pre_sum;
	if (line % 2)
		cout << line + 1 - order<<"/"<< order;
	else
		cout << order<<"/"<< line + 1 - order;
}
