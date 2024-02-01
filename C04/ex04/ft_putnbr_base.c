/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:12:24 by xquah             #+#    #+#             */
/*   Updated: 2024/01/29 15:45:00 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	convert_base(long num, long base, char *str)
{
	if (num == 0)
		return ;
	else
	{
		convert_base(num / base, base, str);
		put_char(str[num % base]);
	}
}

int	check_base(char *base, long num)
{
	int	i;
	int	z;

	i = -1;
	while (base[++i] != '\0')
	{
		z = -1;
		while (base[++z])
			if (base[i] == base[z] && i != z)
				return (0);
		if (base[i] == '+' || base[i] == '-')
			return (0);
	}
	if (num == 0 && i > 1)
	{
		put_char(base[0]);
		return (0);
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	num;
	int		base_length;

	num = (long) nbr;
	base_length = check_base(base, num);
	if (base_length > 1)
	{
		if (num < 0)
		{
			num = num * -1;
			put_char('-');
		}
		convert_base(num, base_length, base);
	}
}

int	main(void)
{
	ft_putnbr_base(-123, "poneyvif");
}
