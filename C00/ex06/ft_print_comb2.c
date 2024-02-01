/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:17:48 by xquah             #+#    #+#             */
/*   Updated: 2024/01/11 15:06:09 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_nums(int num1, int num2, int num3, int num4)
{
	if (num1 != 57 || num2 != 57 || num3 != 57 || num4 != 58)
	{
		write(1, &num1, 1);
		write(1, &num2, 1);
		write(1, " ", 1);
		write(1, &num3, 1);
		write(1, &num4, 1);
	}
	if (num1 != 57 || num2 != 56 || num3 != 57 || num4 != 57)
	{
		write(1, ", ", 2);
	}
}

void	secondary_calculate_comb(int one, int two)
{
	int	three;
	int	four;

	three = one;
	four = two + 2;
	while (three <= 57)
	{
		while (four <= 57)
		{
			print_nums(one, two, three, four);
			four++;
		}
		four = 48;
		three++;
	}
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 48;
	while (first <= 57)
	{
		second = 48;
		while (second <= 57)
		{
			if ((first != 57 || second != 57) && (second + 1) != 58)
			{
				print_nums(first, second, first, second + 1);
			}
			secondary_calculate_comb(first, second);
			second++;
		}
		first++;
	}
}
