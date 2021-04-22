#include <iostream>

int main()
{
	using namespace std;
	int num[10];
	int count = 0;

	for (int i = 0; i < 10; ++i)
	{
		cin >> num[i];
		num[i] %= 42;
	}
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			if (i == j)
				continue;
			if (num[i] == num[j])
				num[j] = -1;
		}
	}
	for (int i = 0; i < 10; ++i)
		if (num[i] == -1)
			count++;
	cout << 10 - count;
}