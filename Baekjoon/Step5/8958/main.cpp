#include <iostream>
#include <cstdio>

int main()
{
	using namespace std;
	char	tmp;
	int		count;
	int		score;
	int     n;

	cin >> n;
	getchar();
	for (int i = 0; i < n; ++i)
	{
		count = 0;
		score = 0;
		while (1)
		{
			scanf("%c", &tmp);
			if (tmp == 'O')
				count++;
			else
			{
				for (int k = 1; k <= count; ++k)
					score += k;
				count = 0;
			}
			if (tmp == '\n')
				break;
		}
		cout << score << '\n';
	}
}