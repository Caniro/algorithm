#include <iostream>

class element
{
public:
	int		num;
	char	alpha;

	friend std::ostream& operator << (std::ostream& out, element& e)
	{
		out << e.num << " " << e.alpha << std::endl;
		return (out);
	}
};

//void	print_elem(element* a, int n)
//{
//	using namespace std;
//	
//	for (int i = 0; i < n; ++i)
//		cout << a[i];
//	cout << endl;
//}

template <typename T>
static void	ft_swap(T* a, int i, int j)
{
	T tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;
}

// 중복 없을 때
int	selection(element *a, int left, int right, int k)
{
	int	pivot = left;
	int	high = left + 1;
	int	low = right;

	if (left > right)
	{
		std::cout << "Right index must be larger than left index." << std::endl;
		exit(1);
	}
	else if (left == right)
		return (a[left].num);
	while (high < low)
	{
		while (high <= right && a[high].num < a[pivot].num)
			high++;
		while (low >= left && a[low].num > a[pivot].num)
			low--;
		if (high >= low)
			break;
		ft_swap(a, high, low);
	}
	ft_swap(a, pivot, low);
	
	/*for (int i = 0; i < 7; ++i)
		std::cout << a[i];
	std::cout << std::endl;*/
	int	S = low - left;
	if (k == S + 1)
		return (a[low].num);
	else if (k < S + 1)
		return selection(a, left, low - 1, k);
	else
		return selection(a, low + 1, right, k - (S + 1));
}

int main()
{
	using namespace std;

	element elem[] = { {10,'a'}, {2,'b'}, {7,'c'}, {5,'d'}, {15,'e'}, {3,'f'}, {11,'g'} };
	for (auto & e : elem)
		cout << e;
	cout << endl;
	
	for (int k = 1; k < sizeof(elem) / sizeof(elem[0]) + 1; ++k)
	{
		element elem[] = { {10,'a'}, {2,'b'}, {7,'c'}, {5,'d'}, {15,'e'}, {3,'f'}, {11,'g'} };
		cout << k << "th number : " << selection(elem, 0, 6, k) << endl;
	}
}