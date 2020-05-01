#include <iostream>
#include <vector>

typedef struct 
{
	int	num;
} element;

template <typename T>
static void	ft_swap(T *a, int i, int j)
{
	T tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;
}

void		msort(element *a, int p, int q, int(*cmp)(element, element))
{
	if (p >= q)
		return;

	int mid = (p + q) / 2;
	msort(a, p, mid, cmp);
	msort(a, mid + 1, q, cmp);
	for (int i = p - 1; i < q; ++i)
	{
		int min = a[i].num;
		int	minix = i;
		for (int j = i; j < q; ++j)
		{
			if (cmp(a[i], a[j]) > 0)
			{
				min = a[j];
				minix = j;
			}
		}
		ft_swap(a, minix, i);
	}
}

int			main()
{
	using namespace std;

	element elem[4] = { 10, 2, 7, 5 };

	for (auto& e : elem)
		cout << e.num << " ";
	cout << endl;

	msort(elem, 1, 4);

	for (auto& e : elem)
		cout << e.num << " ";
}