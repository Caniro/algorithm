#include <vector>

long long sum(std::vector<int>& a)
{
	long long _sum;

	_sum = 0;
	for (auto& e : a)
	{
		_sum += e;
	}
	return (_sum);
}