
#include <iostream>

int main()
{
	using namespace std;

	int    num, min, max, tmp;

	cin >> num;
	if (num == 0)
		return (0);
	cin >> min;
	max = min;
	for (int i = 1; i < num; ++i)
	{
		cin >> tmp;
		if (min > tmp)
			min = tmp;
		if (max < tmp)
			max = tmp;
	}
	cout << min << ' ' << max;
}