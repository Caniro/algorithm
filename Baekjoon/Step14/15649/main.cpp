#include <iostream>
#include <vector>

void	back_tracking(std::vector<int> &output, std::vector<int> &used, int n, int m, int depth)
{
	std::vector<int>	next;
	std::vector<int>	used_tmp(used);
	int					flag;

	if (m < depth)
	{
		for (int i = 1; i < m; ++i)
			std::cout << output[i] << ' ';
		std::cout << output[m] << '\n';
		return ;
	}
	flag = 0;
	for (int i = 1; i <= n; ++i)
		if (used[i] == 0)
		{
			next.push_back(i);
			flag = 1;
		}
	if (flag == 0)
		return ;
	for (auto& e : next)
	{
		used_tmp[e] = 1;
		output[depth] = e;
		back_tracking(output, used_tmp, n, m, depth + 1);
		used_tmp[e] = 0;
	}
}

void	reset(std::vector<int> &output, std::vector<int>& used)
{
	for (auto& e : output)
		e = 0;
	for (auto& e : used)
		e = 0;
}

int		main()
{
	using namespace std;
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int			n;
	int			m;
	vector<int> used;
	vector<int> output;

	cin >> n >> m;
	used.resize(n + 1);
	output.resize(n + 1);
	for (int i = 1; i <= n; ++i)
	{
		reset(output, used);
		output[1] = i;
		used[i] = 1;
		back_tracking(output, used, n, m, 2);
	}
}