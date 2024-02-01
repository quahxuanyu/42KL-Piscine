/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:02:55 by xquah             #+#    #+#             */
/*   Updated: 2024/01/24 12:32:06 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	num;

	num = 1;
	if (power < 0)
		return (0);
	while (--power >= 0)
	{
		num = num * nb;
	}
	return (num);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i", ft_iterative_power(10, -1));
}*/
