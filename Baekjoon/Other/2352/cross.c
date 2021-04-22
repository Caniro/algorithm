/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cross.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 20:05:09 by yuhan             #+#    #+#             */
/*   Updated: 2020/03/01 22:10:40 by yuhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		put_flag(char **flag, char *arr, int i, int n, char **arr_count)
{
	int	count;

	if (arr[i] == 0)
	{
		printf("arr[%d] is 0\n", i);
		return (0);
	}
	*(*flag + arr[i] - 1) = 1;
	count = 0;
	for (int j = 0; j < n; j++)
	{
		if ((j < i && arr[j] > arr[i]) || (j > i && arr[j] < arr[i] && arr[j]))
			count++;
	}
	*(*arr_count + i) = count;
	printf("At index %dth, count is %d\n", i, count);
	return (count);
}

void	printarr(char *flag, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", flag[i]);
	}
	printf("\n");
}

void	init_arr(char **arr, int n)
{
	for (int i = 0; i < n; i++)
		*(*arr + i) = 0;
}

int		cal_maxidx(char **arr_count, int n)
{
	int	idx;
	int max;

	printf("Calculating max_idx... n = %d\n", n);
	idx = 0;
	max = **arr_count;
	for (int i = 0 ; i < n; i++)
	{
		if (*(*arr_count + i) > max)
		{
			idx = i;
			max = *(*arr_count + i);
		}
	}
	printf("max = %d\n", max);
	return (idx);
}

void	remove_cross(char **arr, char **flag, int n, char **arr_count, int *line)
{
	int		count;
	int		max_idx;

	count = 0;
	for (int i = 0; i < n; ++i)
	{
		if (put_flag(flag, *arr, i, n, arr_count))
			count++;
	}
	printarr(*flag, n);
	printf("arr_count : ");
	printarr(*flag, n);
	printf("cross count = %d\n", count);
	max_idx = cal_maxidx(arr_count, n);
	printf("max_idx = %d\n", max_idx);
	if (count)
	{
		*(*arr + max_idx) = 0;
		*line -= 1;
		init_arr(flag, n);
		init_arr(arr_count, n);
		printf("-----------------------------\n");
		printarr(*arr, n);
		remove_cross(arr, flag, n, arr_count, line);
	}
	else
	{
		printf("=============================\n");
		printf("The number of lines is %d\n", *line);
	}

}

int		main(void)
{
	int 	n;
	int		line;
	char	*arr = (char *)malloc(sizeof(int) * n);
	char	*flag;
	char	*arr_count;

	scanf("%d", &n);
	flag = (char *)calloc(n, sizeof(char));
	getchar();
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", arr + i);
		getchar();
	}

	/*
	   n = 7;
	 */
	   line = n;
	   flag = (char *)calloc(n, sizeof(char));
	   arr_count = (char *)calloc(n, sizeof(char));
	/*   arr[0] = 4;
	   arr[1] = 2;
	   arr[2] = 6;
	   arr[3] = 3;
	   arr[4] = 1;
	   arr[5] = 5;
	   arr[6] = 7;
	 */
	printarr(arr, n);
	remove_cross(&arr, &flag, n, &arr_count, &line);
}
