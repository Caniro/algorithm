#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>

int		main()
{
	using namespace std;
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;


	if (n == 1)
		cout << 666;
	else
	{
		string		str = "666";
		string		tmp;
		string		res;
		vector<int>	arr;
		// 9999666
		// 666 ~ 9666 : 10개 + 9개 -> 19
		// 10666 ~ 99666 : 90개 + 9개 * 9개 + (99개 - 1개) -> 대략 250개
		// 100666 ~ 999666 : 900개 + 9 * 9개 + 
		arr.push_back(666);
		for (int i = 1; i < 10000; ++i)
		{
			tmp = str;
			tmp.insert(0, to_string(i));
			arr.push_back(atoi(tmp.c_str()));
		}
		for (int j = 0; j < 10000; ++j)
		{
			tmp = str;
			tmp.append(to_string(j));
			arr.push_back(atoi(tmp.c_str()));
		}
		for (int j = 0; j < 1000; ++j)
		{
			tmp = str;
			tmp.append("0");
			tmp.append(to_string(j));
			arr.push_back(atoi(tmp.c_str()));
		}
		for (int j = 0; j < 100; ++j)
		{
			tmp = str;
			tmp.append("00");
			tmp.append(to_string(j));
			arr.push_back(atoi(tmp.c_str()));
		}
		for (int j = 0; j < 10; ++j)
		{
			tmp = str;
			tmp.append("000");
			tmp.append(to_string(j));
			arr.push_back(atoi(tmp.c_str()));
		}
		for (int i = 1; i < 10; ++i)
		{
			for (int j = 0; j < 10000; ++j)
			{
				tmp = str;
				tmp.insert(0, to_string(i));
				tmp.append(to_string(j));
				arr.push_back(atoi(tmp.c_str()));
			}
			for (int j = 0; j < 1000; ++j)
			{
				tmp = str;
				tmp.insert(0, to_string(i));
				tmp.append("0");
				tmp.append(to_string(j));
				arr.push_back(atoi(tmp.c_str()));
			}
			for (int j = 0; j < 100; ++j)
			{
				tmp = str;
				tmp.insert(0, to_string(i));
				tmp.append("00");
				tmp.append(to_string(j));
				arr.push_back(atoi(tmp.c_str()));
			}
			for (int j = 0; j < 10; ++j)
			{
				tmp = str;
				tmp.insert(0, to_string(i));
				tmp.append("000");
				tmp.append(to_string(j));
				arr.push_back(atoi(tmp.c_str()));
			}
		}
		for (int i = 10; i < 100; ++i)
		{
			for (int j = 0; j < 1000; ++j)
			{
				tmp = str;
				tmp.insert(0, to_string(i));
				tmp.append(to_string(j));
				arr.push_back(atoi(tmp.c_str()));
			}
			for (int j = 0; j < 100; ++j)
			{
				tmp = str;
				tmp.insert(0, to_string(i));
				tmp.append("0");
				tmp.append(to_string(j));
				arr.push_back(atoi(tmp.c_str()));
			}
			for (int j = 0; j < 10; ++j)
			{
				tmp = str;
				tmp.insert(0, to_string(i));
				tmp.append("00");
				tmp.append(to_string(j));
				arr.push_back(atoi(tmp.c_str()));
			}
		}
		for (int i = 100; i < 1000; ++i)
		{
			for (int j = 0; j < 100; ++j)
			{
				tmp = str;
				tmp.insert(0, to_string(i));
				tmp.append(to_string(j));
				arr.push_back(atoi(tmp.c_str()));
			}
			for (int j = 0; j < 10; ++j)
			{
				tmp = str;
				tmp.insert(0, to_string(i));
				tmp.append("0");
				tmp.append(to_string(j));
				arr.push_back(atoi(tmp.c_str()));
			}
		}
		unique(arr.begin(), arr.end());
		sort(arr.begin(), arr.end());
		arr.erase(unique(arr.begin(), arr.end()), arr.end());
		cout << arr[n - 1];
	}
}