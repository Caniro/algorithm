#include <iostream>
#include <vector>

int		main()
{
	using namespace std;
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<vector<int>> arr(n);
	for (auto& e : arr)
	{
		e.resize(3);
		cin >> e[0] >> e[1];
		e[2] = 1;
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
				arr[i][2]++;
		}
	}
	for (auto& e : arr)
		cout << e[2] << ' ';
}