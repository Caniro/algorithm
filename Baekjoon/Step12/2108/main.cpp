#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

int		main()
{
	using namespace std;
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	vector<int>		arr;
	map<int, int>	count;
	int				n;
	int				avg;
	int				range;
	int				max;
	int				c;
	cin >> n;
	arr.resize(n + 1);
	for (int i = 0 ; i < n; ++i)
		cin >> arr[i];
	sort(arr.begin(), arr.end() - 1);
	avg = 0;
	for (int i = 0; i < n; ++i)
		avg += arr[i];
	avg = round((float)avg / n);
	cout << avg << '\n';
	cout << arr[n / 2] << '\n';
	range = arr[n - 1] - arr[0];
	for (int i = 0; i < n; ++i)
		count[arr[i]]++;
	int	i = 0;
	for (auto& e : count)
		arr[i++] = e.second;
	arr.resize(count.size());
	sort(arr.begin(), arr.end(), [](int a, int b) -> bool {return (a > b); });
	max = 0;
	c = 0;
	for (auto& e : count)
	{
		if (count.size() == 1 || arr[0] != arr[1])
		{
			if (e.second == arr[0])
			{
				cout << e.first << '\n';
				break;
			}
		}
		if (e.second == arr[0])
		{
			if (c == 0)
			{
				max = e.first;
				c++;
			}
			else
			{
				cout << e.first << '\n';
				break;
			}
		}
	}
	cout << range;
}