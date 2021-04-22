#pragma once
#include <iostream>
#include "Engine/yh.h"

template <typename T>
static void	ft_swap(T* a, int i, int j)
{
	T tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;
}

void	quickSort(yh::vec2* a, int left, int right, int(*cmp)(yh::vec2, yh::vec2))
{
	int	pivot = left;
	int	high = left + 1;
	int	low = right;

	if (left >= right)
		return;
	while (high < low)
	{
		while (high <= right && a[high].x < a[pivot].x)
			high++;
		while (low >= left && a[low].x > a[pivot].x)
			low--;
		if (high >= low)
			break;
		ft_swap(a, high, low);
	}
	ft_swap(a, pivot, low);

	quickSort(a, left, low - 1, cmp);
	quickSort(a, low + 1, right, cmp);
}