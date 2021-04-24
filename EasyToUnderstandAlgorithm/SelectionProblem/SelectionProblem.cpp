#include <iostream>
#include <vector>

void PrintArr(const std::vector<int>& arr)
{
	for (const auto &e : arr)
		std::cout << e << ' ';
	std::cout << std::endl;
}

int Selection(std::vector<int>& arr, int left, int right, int k)
{
	if (left == right)
		return (arr[left]);

	int	pivot = (left + right) / 2;
	int	high = left + 1;
	int	low = right;

	std::swap(arr[pivot], arr[left]);
	while (high <= low)
	{
		while ((high <= right) && (arr[high] <= arr[left]))
			high++;
		while ((low >= left) && (arr[low] >= arr[left]))
			low--;
		if (high > low)
			break;
		std::swap(arr[low], arr[high]);
	}
	std::swap(arr[left], arr[low]);

	int small_group_size = low - left;
	if (k <= small_group_size)
		return Selection(arr, left, low - 1, k);
	else if (k == small_group_size + 1)
		return (arr[low]);
	else
		return Selection(arr, low + 1, right, k - (small_group_size + 1));
}

int main()
{
	using namespace std;

	vector<int> arr{ 6, 3, 11, 9, 12, 2, 8, 15 };
	int k = 7;

	PrintArr(arr);
	cout << k << "th number : " << Selection(arr, 0, arr.size() - 1, k) << endl;
}
