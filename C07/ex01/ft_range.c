/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:53:31 by xquah             #+#    #+#             */
/*   Updated: 2024/01/29 16:59:20 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*lst;
	int	i;
	int	counter;

	if (min >= max)
		return (NULL);
	lst = (int *) malloc(sizeof(int) * (max - min));
	if (!lst)
		return (NULL);
	i = min;
	counter = 0;
	while (i < max)
		lst[counter++] = i++;
	return (lst);
}
/*
#include <unistd.h>
#include <stdio.h>
void	put_char(char c)
{
	write(1, &c, 1);
}

void	print_array(int *arr, int size)
{
	int	i;

	i = -1;
	while (++i < size)
	{
		printf("%i ", arr[i]);
	}
	printf("\n");
}

int	main(void)
{
	int *test;
	int	min = -10;
	int max = -5;
	
	test = ft_range(min, max);
	print_array(test, max - min);
}*/
