#include <iostream>
#include <vector>
#include <algorithm>

static void get_sudoku(int (&sudoku)[9][9])
{
	for (int j = 0; j < 9; ++j)
		for (int i = 0; i < 9; ++i)
			std::cin >> sudoku[j][i];
}

static void print_sudoku(int (&sudoku)[9][9])
{
	for (int j = 0; j < 9; ++j)
	{
		for (int i = 0; i < 9; ++i)
			std::cout << sudoku[j][i] << ' ';
		std::cout << '\n';
	}
}

static void	check_blank(int (&sudoku)[9][9], std::vector<int> &blank)
{
	for (int j = 0; j < 9; ++j)
		for (int i = 0; i < 9; ++i)
			if (!sudoku[j][i])
				blank.push_back(j * 9 + i);
}

static void	horizontal_check(int (&sudoku)[9][9], int j, int (&arr)[10])
{
	for (int i = 0; i < 9; ++i)
		arr[sudoku[j][i]]++;
}

static void	vertical_check(int (&sudoku)[9][9], int i, int (&arr)[10])
{
	for (int j = 0; j < 9; ++j)
		arr[sudoku[j][i]]++;
}

static void	grid_check(int (&sudoku)[9][9], int i, int j, int (&arr)[10])
{
	for (int y = j / 3 * 3; y < (j / 3 + 1) * 3; ++y)
		for (int x = i / 3 * 3; x < (i / 3 + 1) * 3; ++x)
			arr[sudoku[y][x]]++;
}

static void	put_candidate(int (&sudoku)[9][9], std::vector<int> (&candidate)[9][9])
{
	int	arr[10] = {0, };

	for (int j = 0; j < 9; ++j)
		for (int i = 0; i < 9; ++i)
		{
			if (sudoku[j][i])
				continue ;
			for (auto &e: arr)
				e = 0;
			horizontal_check(sudoku, j, arr);
			vertical_check(sudoku, i, arr);
			grid_check(sudoku, i, j, arr);
			for (int k = 1; k < 10; ++k)
			{
				if (arr[k] == 0)
					candidate[j][i].push_back(k);
			}
		}
}

static void	found_one(std::vector<int> (&candidate)[9][9], int i, int j, int num)
{
	for (int y = 0; y < 9; ++y)
	{
		if (candidate[y][i].size() == 0)
			continue ;
		candidate[y][i].erase(std::remove(candidate[y][i].begin(), candidate[y][i].end(), num), \
								candidate[y][i].end());
	}
	for (int x = 0; x < 9; ++x)
	{
		if (candidate[j][x].size() == 0)
			continue ;
		candidate[j][x].erase(std::remove(candidate[j][x].begin(), candidate[j][x].end(), num), \
								candidate[j][x].end());
	}
	for (int y = j / 3 * 3; y < (j / 3 + 1) * 3; ++y)
		for (int x = i / 3 * 3; x < (i / 3 + 1) * 3; ++x)
		{
			if (candidate[y][x].size() == 0)
				continue ;
			candidate[y][x].erase(std::remove(candidate[y][x].begin(), candidate[y][x].end(), num), \
									candidate[y][x].end());
		}
}

static void	fill_one_remainder(int (&sudoku)[9][9], std::vector<int> (&candidate)[9][9], std::vector<int> &blank)
{
	while(1)
	{
		for (unsigned int k = 0; k < blank.size(); ++k)
		{
			int	i = blank[k] % 9;
			int	j = blank[k] / 9;

			if (candidate[j][i].size() == 1)
			{
				sudoku[j][i] = candidate[j][i][0];
				found_one(candidate, i, j, candidate[j][i][0]);
				blank.erase(blank.begin() + k);
			}
		}
		for (int j = 0; j < 9; ++j)
			for (int i = 0; i < 9; ++i)
				if (candidate[j][i].size() == 1)
					continue ;
		break ;
	}
}

static void	backtracking(int sudoku[9][9], std::vector<int> candidate[9][9], std::vector<int> blank)
{

}

static void	main_loop(int (&sudoku)[9][9], std::vector<int> (&candidate)[9][9], std::vector<int> &blank)
{
	backtracking(sudoku, candidate, blank);
}

int			main()
{
	int						sudoku[9][9];
	std::vector<int>		candidate[9][9];
	std::vector<int>		blank;

	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	get_sudoku(sudoku);
	check_blank(sudoku, blank);
	put_candidate(sudoku, candidate);
	fill_one_remainder(sudoku, candidate, blank);
	if (blank.size())
		main_loop(sudoku, candidate, blank);
	print_sudoku(sudoku);
	return (0);
}
