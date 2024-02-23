/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_char.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 11:59:07 by xquah             #+#    #+#             */
/*   Updated: 2024/01/20 11:59:14 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	g_test[4] = {4, 1, 2, 3};

void	put_char(char c)
{
	write(1, &c, 1);
}

void	put_str(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
	{
		put_char(str[i]);
	}
}

void	print_array(int *arr)
{
	int	i;

	i = -1;
	while (++i < 4)
	{
		put_char(arr[i] + '0');
		put_char(' ');
	}
	put_char('\n');
}

int	check_error(int grid[4][4], int row, int k, int column)
{
	while (++row < 4)
	{
		column = -1;
		while (++column < 4)
		{
			if (grid[row][column] == g_test[column])
				k++;
			else if (grid[row][column] == 0)
			{
				put_str("Error\n");
				return (1);
			}
		}
	}
	if (k == 16)
	{
		put_str("Error\n");
		return (1);
	}
	return (0);
}

void	print_grid(int grid[4][4])
{
	int	row;
	int	column;

	if (!check_error(grid, -1, 0, -1))
	{
		row = -1;
		while (++row < 4)
		{
			column = -1;
			while (++column < 4)
			{
				put_char(grid[row][column] + '0');
				if (column != 3)
				{
					put_char(' ');
				}
			}
			put_char('\n');
		}
	}
}
