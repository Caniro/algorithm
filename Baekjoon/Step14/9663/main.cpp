#include <iostream>
#include <vector>
#include <cmath>

class queen
{
private:
	int		x;
	int		y;
public:
	queen() {};
	queen(int _x, int _y) : x(_x), y(_y) {};
	int		is_overlapped(const std::vector<queen> &vq, int _x)
	{
		for (int i = 0; i < _x; ++i)
		{
			if (vq[i].x == this->x || vq[i].y == this->y || \
				(abs(vq[i].x - this->x) == abs(vq[i].y - this->y)))
				return (1);
		}
		return (0);
	}
};

void	find_queen(int &res, int n, std::vector<queen> &vq, int x)
{
	if (x == n)
	{
		res++;
		return ;
	}
	for (int y = 0; y < n; ++y)
	{
		queen q(x, y);
		if (x == 0 || !q.is_overlapped(vq, x))
		{
			vq.at(x) = q;
			find_queen(res, n, vq, x + 1);
		}
	}
}

int		main()
{
	int					res;
	int					n;
	std::vector<queen>	vq;

	res = 0;
	std::cin >> n;
	vq.resize(n);
	find_queen(res, n, vq, 0);
	std::cout << res;
	return (0);
}
