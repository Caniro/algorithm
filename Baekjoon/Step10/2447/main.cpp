#include <iostream>
#include <cstdlib>

void	print_arr(char** arr, int n)
{
	using namespace std;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
			cout << arr[i][j];
		cout << '\n';
	}
}

void	put_hole(int N, char** arr, int n)
{
	if (n == 0)
		return;
	for (int row = 0; row < N; row += n)
	{
		for (int col = 0; col < N; col += n)
		{
			for (int i = n / 3; i < 2 * n / 3; ++i)
			{
				for (int j = n / 3; j < 2 * n / 3; ++j)
					arr[i + row][j + col] = ' ';
			}
		}
	}
	put_hole(N, arr, n / 3);
}

int		main()
{
	using namespace std;
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	char** arr;
	if (!(arr = (char **)malloc(n * sizeof(char *))))
		return (-1);
	for (int i = 0; i < n; ++i)
		arr[i] = (char*)malloc(n * sizeof(char));

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			arr[i][j] = '*';
	
	put_hole(n, arr, n);
	print_arr(arr, n);

	for (int i = 0; i < n; ++i)
		free(arr[i]);
	free(arr);
}