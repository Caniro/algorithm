#include <iostream>

void	hanoi_mute(int N, int& count, int start, int end)
{
	using namespace std;

	if (N == 1)
	{
		count++;
	}
	else
	{
		hanoi_mute(N - 1, count, start, 6 - (start + end));
		count++;
		hanoi_mute(N - 1, count, 6 - (start + end), end);
	}
}

void	hanoi_print(int N, int &count, int start, int end)
{
	using namespace std;

	if (N == 1)
	{
		cout << start << ' ' << end << '\n';
	}
	else
	{
		hanoi_print(N - 1, count, start, 6 - (start + end));
		cout << start << ' ' << end << '\n';
		hanoi_print(N - 1, count, 6 - (start + end), end);
	}
}

int		main()
{
	using namespace std;
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int	N;
	cin >> N;

	int count;
	count = 0;
	hanoi_mute(N, count, 1, 3);
	cout << count << '\n';
	hanoi_print(N, count, 1, 3);
}