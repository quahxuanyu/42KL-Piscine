/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:29:05 by xquah             #+#    #+#             */
/*   Updated: 2024/01/26 12:36:59 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	counter;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc((max - min) * sizeof(int));
	if (!(*range))
		return (-1);
	i = min;
	counter = 0;
	while (i < max)
	{
		(*range)[counter] = i;
		counter++;
		i++;
	}
	return (counter);
}

/*
#include <stdio.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int *test;
	int	i;
	int size;
	
	size = ft_ultimate_range(&test, 0, 10);
	printf("Return Value: %i", size);
	i = -1;
	while (++i < size)
	{
		put_char(test[i] + '0');
		put_char(' ');
	}
	put_char('\n');
}*/
