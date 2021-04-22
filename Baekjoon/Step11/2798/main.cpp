#include <iostream>

int		main()
{
	using namespace std;
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int	N, M;
	cin >> N >> M;

	int* arr = new int[N];
	for (int i = 0; i < N; ++i)
		cin >> arr[i];

	int	max;
	max = 0;

	for (int i = 0; i < N; ++i)
	{
		for (int j = i + 1; j < N; ++j)
		{
			for (int k = j + 1; k < N; ++k)
			{
				int sum = arr[i] + arr[j] + arr[k];
				if (sum > max&& sum <= M)
					max = sum;
			}
		}
	}
	cout << max;
	delete[] arr;
}