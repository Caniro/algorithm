#include <iostream>
#include <vector>

void	put_permutation(std::vector<int> &v)
{
	for (int i = 0; i < v.size(); ++i)
	{
		std::cout << v[i];
		if (i != v.size() - 1)
			std::cout << ' ';
	}
	std::cout << '\n';
}

void	repetition_p(std::vector<int> &v, int n, int m, int depth)
{
	if (depth <= 0)
	{
		put_permutation(v);
		return ;
	}
	for (int i = 1; i <= n; ++i)
	{
		v[m - depth] = i;
		repetition_p(v, n, m, depth - 1);
	}
}

int		main()
{
	int					n;
	int					m;
	std::vector<int>	v;

	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cin >> n >> m;
	v.resize(m);
	repetition_p(v, n, m, m);
}
