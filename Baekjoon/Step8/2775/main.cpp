#include <iostream>

int main()
{
	using namespace std;

	int	arr[15][16];

	for (int j = 1; j < 15; ++j)
		arr[0][j] = j;
	for (int i = 1; i < 15; ++i)
		for (int j = 1; j < 15; ++j)
			arr[i][j] = 0;
	for (int i = 1; i < 15; ++i)
		for (int j = 1; j < 15; ++j)
			for (int k = 1; k <= j; ++k)
				arr[i][j] += arr[i - 1][k];

	int T;
	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		int	k, n;
		cin >> k >> n;
		cout << arr[k][n] << '\n';
	}
}