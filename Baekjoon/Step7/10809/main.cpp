#include <iostream>

int    main()
{
	using namespace std;
	
	int		flag[26];
	int		order;
	char	ch;

	for (auto& e : flag)
		e = -1;
	order = 0;
	while ((ch = getchar()) != '\n')
	{
		for (int i = 0; i < 26; ++i)
		{
			if (ch == 'a' + i)
			{
				if (flag[i] == -1)
					flag[i] = order;
				order++;
				break;
			}
		}
	}
	for (auto& e : flag)
		cout << e << " ";
}