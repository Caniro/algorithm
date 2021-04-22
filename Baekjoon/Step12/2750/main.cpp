#include <iostream>
#include <vector>
#include <algorithm>

int		main()
{
	using namespace std;
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<int> arr(n);
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	sort(arr.begin(), arr.end());
	for (auto& e : arr)
		cout << e << '\n';
}