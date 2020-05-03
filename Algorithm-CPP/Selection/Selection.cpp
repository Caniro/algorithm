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

	if (left >= right)
		return;
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
	
	int	S = low - left;
	
}

int main()
{
	using namespace std;

	element elem[] = { {10,'a'}, {2,'b'}, {7,'c'}, {5,'d'}, {15,'e'}, {3,'f'}, {11,'g'} };

}