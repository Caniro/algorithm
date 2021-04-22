#include <iostream>
#include <algorithm>

int cmp(const void* a, const void* b)
{
	if (*(int*)a < *(int*)b) return -1;
	if (*(int*)a == *(int*)b) return 0;
	if (*(int*)a > * (int*)b) return 1;
}

int		main()
{
	using namespace std;

	cin.tie(NULL);
	ios::sync_with_stdio(false);
	while (1)
	{
		int	arr[3];
		cin >> arr[0] >> arr[1] >> arr[2];
		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
			break ;
		qsort(arr, 3, sizeof(int), cmp);
		

		if (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2])
			cout << "right" << '\n';
		else
			cout << "wrong" << '\n';
	}
}