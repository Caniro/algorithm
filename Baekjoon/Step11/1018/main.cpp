#include <iostream>
#include <vector>

int		main()
{
	using namespace std;
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int M, N;
	cin >> M >> N;

	vector<vector<char>> arr;
	arr.resize(M);
	for (int i = 0; i < M; ++i)
	{
		arr[i].resize(N);
		for (int j = 0; j < N; ++j)
			cin >> arr[i][j];
	}
	int min = 9999;
	int black, white;
	for (int i = 0; i < M - 7; ++i)
	{
		for (int j = 0; j < N - 7; ++j)
		{
			black = 0;
			white = 0;
			for (int k = 0; k < 8; ++k)
				for (int l = 0; l < 8; ++l)
				{
					if (((i + j + k + l) % 2 == 0 && arr[i + k][j + l] == 'W') || ((i + j + k + l) % 2 == 1 && arr[i + k][j + l] == 'B'))
						black++;
					if (((i + j + k + l) % 2 == 0 && arr[i + k][j + l] == 'B') || ((i + j + k + l) % 2 == 1 && arr[i + k][j + l] == 'W'))
						white++;
				}
			if (min > black)
			{
				if (black > white)
					min = white;
				else
					min = black;
			}
			else if (min > white)
			{
				if (white > black)
					min = black;
				else
					min = white;
			}
		}
	}
	cout << min;
}