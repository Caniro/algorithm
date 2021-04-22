#include <iostream>

int main()
{
	int* flag = new int[10001]{ 0, };


	for (int a = 0; a < 10; ++a)
	{
		for (int b = 0; b < 10; ++b)
		{
			for (int c = 0; c < 10; ++c)
			{
				for (int d = 0; d < 10; ++d)
				{
					if ((1001 * a + 101 * b + 11 * c + 2 * d) < 10001)
						flag[1001 * a + 101 * b + 11 * c + 2 * d] = 1;
				}
			}
		}
	}
	for (int i = 0; i < 10001; ++i)
		if (flag[i] == 0)
			std::cout << i << ' ';
	delete[] flag;
}