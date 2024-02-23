/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 10:57:57 by xquah             #+#    #+#             */
/*   Updated: 2024/01/21 14:02:23 by nsandrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_grid(int grid[4][4]);
void	print_array(int *arr);
void	put_str(char *str);
void	put_char(char c);
void	swap(int *a, int *b);
int		check_line(int arr[4], int right, int left);

int	g_all_pos[24][4];
int	g_count = 0;
int	g_grid[4][4] = {
{0, 0, 0, 0},
{0, 0, 0, 0},
{0, 0, 0, 0},
{0, 0, 0, 0}
};

void	generate_permutations(int arr[], int start, int end)
{
	int	i;

	if (start == end)
	{
		i = 0;
		while (i <= end)
		{
			g_all_pos[g_count][i] = arr[i];
			i++;
		}
		g_count++;
	}
	else
	{
		i = start;
		while (i <= end)
		{
			swap(&arr[start], &arr[i]);
			generate_permutations(arr, start + 1, end);
			swap(&arr[start], &arr[i]);
			i++;
		}
	}
}

int	duplicate_column(int column)
{
	int	seen[5];
	int	i;

	i = -1;
	while (++i < 5)
		seen[i] = 0;
	i = -1;
	while (++i < 4)
	{
		if (seen[g_grid[i][column]] == 1)
		{
			return (1);
		}
		seen[g_grid[i][column]] = 1;
	}
	return (0);
}

int	check_column(int *povs[])
{
	int	column;
	int	row;
	int	arr[4];

	column = -1;
	while (++column < 4)
	{
		row = -1;
		while (++row < 4)
		{
			arr[row] = g_grid[row][column];
		}
		if (!check_line(arr, povs[0][column], povs[1][column]))
			return (0);
		if (duplicate_column(column))
			return (0);
	}
	return (1);
}

int	recurse(int row, int *povs[])
{
	int	i;
	int	current_comb;

	current_comb = -1;
	if (row == 4)
	{
		if (check_column(povs) == 1)
			return (1);
		else
			return (0);
	}
	while (++current_comb < 24)
	{
		i = -1;
		while (++i < 4)
			g_grid[row][i] = g_all_pos[current_comb][i];
		if (check_line(g_grid[row], povs[2][row], povs[3][row]))
		{
			if (recurse(row + 1, povs) == 1)
				return (1);
			else
				continue ;
		}
	}
	return (0);
}

void	rush(int *povs[])
{
	int	arr[4];
	int	i;

	i = -1;
	while (++i < 4)
		arr[i] = i + 1;
	generate_permutations(arr, 0, 3);
	recurse(0, povs);
	print_grid(g_grid);
}
