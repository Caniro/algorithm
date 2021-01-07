#include <iostream>

class element
{
public:
	int	num;
};

template <typename T>
static void	ft_swap(T *a, int i, int j)
{
	T tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;
}

void		merge_sort(element *a, int p, int q, int(*cmp)(element, element))
{
	if (p >= q)
		return;

	int mid = (p + q) / 2;
	merge_sort(a, p, mid, cmp);
	merge_sort(a, mid + 1, q, cmp);

	for (int i = p - 1; i < q; ++i)
	{
		int	swapix = i;
		for (int j = i; j < q; ++j)
		{
			if (cmp(a[i], a[j]) > 0)
			{
				swapix = j;
				break;
			}
		}
		ft_swap(a, swapix, i);
	}
}

int			main()
{
	using namespace std;

	element elem[4] = { 10, 2, 7, 5 };

	for (auto& e : elem)
		cout << e.num << " ";
	cout << endl;

	merge_sort(elem, 1, 4, [](element a, element b) { if (a.num > b.num) return (1); else if (a.num == b.num) return (0); else return (-1); });

	for (auto& e : elem)
		cout << e.num << " ";
}