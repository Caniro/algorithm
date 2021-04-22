#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <cstring>

void	sort_by_len(std::map<std::string, int> &str)
{
	using namespace std;
	
	vector<pair<string, int>>	pairs;
	vector<string>				res;
	int							size;

	pairs.reserve(str.size());
	for (auto &e : str)
		pairs.push_back({e.first, e.second});
	size = pairs.size();
	res.reserve(size);
	for (int i = 1; i < 51; ++i)
	{
		for (int j = 0; j < size; ++j)
			if (pairs[j].second == i)
			{
				res.push_back(pairs[j].first);
			}
	}
	for (auto &e : res)
		cout << e << '\n';
}

int		main()
{
	using namespace std;
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	map<string, int>	str;
	string				input;
	int					n;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> input;
		str[input] = strlen(input.c_str());
	}
	sort_by_len(str);
}