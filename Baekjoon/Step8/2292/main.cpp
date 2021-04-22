#include <iostream>

int main()
{
	using namespace std;

	int n, i;
	cin >> n;

	if (n == 1)
	{
		cout << 1;
		return (0);
	}
	n--;
	i = 1;
	while (n > 0)
	{
		n -= 6 * i++;
	}
	cout << i;
}
