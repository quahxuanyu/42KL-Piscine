/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:11:37 by xquah             #+#    #+#             */
/*   Updated: 2024/01/12 10:18:38 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

int	check_negative(int num)
{
	if (num < 0)
	{
		print_char('-');
		return (num * -1);
	}
	else
	{
		return (num);
	}
}

int	get_length(int nm)
{
	int	total;

	total = 0;
	while (nm > 0)
	{
		total++;
		nm /= 10;
	}
	return (total);
}

void	print_numbers(int nbr)
{
	int	total_digits;
	int	arr[10];
	int	counter;
	int	number;

	nbr = check_negative(nbr);
	number = nbr;
	total_digits = get_length(nbr);
	counter = total_digits;
	while (counter != 0)
	{
		arr[counter - 1] = number % 10;
		number /= 10;
		counter--;
	}
	counter = 0;
	while (counter != total_digits)
	{
		print_char(arr[counter] + 48);
		counter++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb == 0)
	{
		print_char('0');
	}
	else
	{
		print_numbers(nb);
	}
}
