#include <iostream>
#include <vector>

void PrintElements(const std::vector<int>& arr)
{
	for (const auto& e : arr)
		std::cout << e << " ";
	std::cout << std::endl;
}

void Merge(std::vector<int>& arr, int low, int mid, int high)
{
	int i = low;
	int j = mid + 1;
	int temp_idx = low;
	static std::vector<int> temp(arr);

	while ((i <= mid) && (j <= high))
	{
		if (arr[i] < arr[j])
			temp[temp_idx++] = arr[i++];
		else
			temp[temp_idx++] = arr[j++];
	}
	while (i <= mid)
		temp[temp_idx++] = arr[i++];
	while (j <= high)
		temp[temp_idx++] = arr[j++];

	while (low <= high)
	{
		arr[low] = temp[low];
		low++;
	}
}

void MergeSort(std::vector<int>& arr, int low, int high)
{
	if (low == high)
		return ;

	int mid = (low + high) / 2;

	MergeSort(arr, low, mid);
	MergeSort(arr, mid + 1, high);
	Merge(arr, low, mid, high);
}

int main()
{
	using namespace std;

	vector<int> arr = { 37, 10, 22, 30, 35, 13, 25, 24 };

	PrintElements(arr);
	MergeSort(arr, 0, arr.size() - 1);
	PrintElements(arr);
}
