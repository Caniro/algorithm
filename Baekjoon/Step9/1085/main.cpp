#include <iostream>

int		main()
{
	using namespace std;

	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int dist;
	dist = 2147483647;
	
	if (x < w - x)
		dist = x;
	else
		dist = w - x;
	if (y < h - y)
	{
		if (dist > y)
			dist = y;
	}
	else
		if (dist > h - y)
			dist = h - y;
	cout << dist;
}