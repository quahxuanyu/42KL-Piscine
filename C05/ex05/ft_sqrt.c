/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:16:56 by xquah             #+#    #+#             */
/*   Updated: 2024/01/24 16:40:01 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb == 0 || nb == 1)
		return (nb);
	i = 1;
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	int	min_int = -2147483648;
    int max_int = 2147483646;
	int high = 1999967841;
    printf("%d\n", ft_sqrt(high));
    return 0;
}*/
