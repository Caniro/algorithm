#include <iostream>
#include <vector>

void PrintArr(const std::vector<int>& arr)
{
	for (auto& e : arr)
		std::cout << e << ' ';
	std::cout << std::endl;
}

void QuickSort(std::vector<int>& arr, int left, int right)
{
	if (left >= right)
		return ;

	int	pivot = (left + right) / 2;
	int	high = left + 1;
	int	low = right;

	std::swap(arr[pivot], arr[left]);
	while (high <= low)
	{
		while ((high <= right) && (arr[high] <= arr[left]))
			high++;
		while ((low > left) && (arr[low] >= arr[left]))
			low--;
		if ((high > right) || (low == left) || (high >= low))
			break;
		std::swap(arr[high], arr[low]);
	}
	std::swap(arr[left], arr[low]);

	QuickSort(arr, left, low - 1);
	QuickSort(arr, low + 1, right);
}

int main()
{
	std::vector<int> arr{ 11, 9, 2, 12, 8, 15, 18, 10 };

	PrintArr(arr);
	QuickSort(arr, 0, arr.size() - 1);
	PrintArr(arr);
}
