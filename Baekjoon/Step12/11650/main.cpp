#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

class coordinate
{
public:
	int	x;
	int	y;

	bool operator < (coordinate & c)
	{
		return (this->x < c.x);
	}
};

void	myswap(std::vector<coordinate> & c, int idx1, int idx2)
{
	coordinate tmp;
	tmp = c[idx1];
	c[idx1] = c[idx2];
	c[idx2] = tmp;
}

void	sort_y(int& n, std::vector<coordinate>& c)
{
	int	idx;
	int	min;

	for (int i = 0; i < n - 1; ++i)
	{
		if (c[i].x == c[i + 1].x)
		{
			idx = i;
			min = c[i].y;
			for (int j = i + 1; (j < n) && (c[idx].x == c[j].x); ++j)
			{
				if (min > c[j].y)
				{
					min = c[j].y;
					idx = j;
				}
			}
			myswap(c, i, idx);
		}
	}
}

void	init_coordinate(int& n, std::vector<coordinate> & c)
{
	std::cin >> n;
	c.resize(n);
	for (int i = 0; i < n; ++i)
		std::cin >> c[i].x >> c[i].y;
}

void	print_coor(int &n, std::vector<coordinate> & c)
{
	for (int i = 0; i < n; ++i)
		std::cout << c[i].x << ' ' << c[i].y << '\n';
}

int		main()
{
	using namespace std;
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	vector<coordinate>	c;
	int					n;

	init_coordinate(n, c);
	sort(c.begin(), c.end());
	sort_y(n, c);
	print_coor(n, c);
}