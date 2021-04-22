#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>

class	Member
{
public:
	int			age;
	std::string	name;
};

void	merge_sort(std::vector<Member> &a, int p, int q, bool(*cmp)(Member, Member), std::vector<Member> &res)
{
	int	i;
	int	j;
	int mid = (p + q) / 2;

	if (p >= q)
		return;
	merge_sort(a, p, mid, cmp, res);
	merge_sort(a, mid + 1, q, cmp, res);

	i = p - 1;
	j = mid;
	for (int k = p - 1; k < q; ++k)
	{
		if (j >= q) res[k] = a[i++];
		else if (i >= mid) res[k] = a[j++];
		else if (a[i].age <= a[j].age) res[k] = a[i++];
		else res[k] = a[j++];
	}
	for (i = p - 1; i < q; ++i)
		a[i] = res[i];
}

int		main()
{
	using namespace std;
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	vector<Member>	members;
	vector<Member>	res;
	string	name;
	int		age;
	int		n;

	cin >> n;
	members.resize(n);
	res.resize(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> age >> name;
		members[i].age = age;
		members[i].name = name;
	}
	merge_sort(members, 1, n, [] (Member a, Member b)-> bool {return (a.age < b.age); }, res);
	for (auto& e : res)
		cout << e.age << ' ' << e.name << '\n';
}