#include <iostream>
#include <cmath>

int		main()
{
	using namespace std;
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int	T;
	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		int	x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		if (x1 == x2 && y1 == y2)
		{
			if (r1 == r2)
				cout << -1 << '\n';
			else
				cout << 0 << '\n';
			continue;
		}
		float dist;
		dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
		if ((dist > r1 + r2) || dist < abs(r1 - r2))
			cout << 0 << '\n';
		else if ((dist == r1 + r2) || dist == abs(r1 - r2))
			cout << 1 << '\n';
		else
			cout << 2 << '\n';
	}
}