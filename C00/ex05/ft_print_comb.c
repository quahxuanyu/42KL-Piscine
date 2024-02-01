/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:59:47 by xquah             #+#    #+#             */
/*   Updated: 2024/01/10 19:14:17 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_num(int one, int two, int three)
{
	write(1, &one, 1);
	write(1, &two, 1);
	write(1, &three, 1);
	if (one != 55)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	first;
	int	second;
	int	third;

	first = 48;
	while (first < 58)
	{
		second = first + 1;
		while (second < 58)
		{
			third = second + 1;
			while (third < 58)
			{
				print_num(first, second, third);
				third++;
			}
			second++;
		}
		first++;
	}
}
