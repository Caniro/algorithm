#include <iostream>
//#include <cstdlib>

class element
{
public:
	int	num;
};

template <typename T>
static void	ft_swap(T* a, int i, int j)
{
	T tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;
}

void	quick_sort(element* a, int p, int q, int(*cmp)(element, element))
{
	int	pivot = p;
	int	high = p + 1;
	int	low = q;

	if (p >= q)
		return ;
	while (high < low)
	{
		while (high <= q && a[high].num < a[pivot].num)
			high++;
		while (low >= p && a[low].num > a[pivot].num)
			low--;
		if (high >= low)
			break;
		ft_swap(a, high, low);
	}
	ft_swap(a, pivot, low);

	quick_sort(a, p, low - 1, cmp);
	quick_sort(a, low + 1, q, cmp);
}

int		main()
{
	using namespace std;

	element elem[4] = { 10, 2, 7, 5 };

	for (auto& e : elem)
		cout << e.num << " ";
	cout << endl;

	quick_sort(elem, 0, 3, [](element a, element b) { if (a.num > b.num) return (1); else if (a.num == b.num) return (0); else return (-1); });

	for (auto& e : elem)
		cout << e.num << " ";
	cout << endl;
}