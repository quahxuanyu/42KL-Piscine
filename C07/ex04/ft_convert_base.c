/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:05:21 by xquah             #+#    #+#             */
/*   Updated: 2024/01/29 11:05:22 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_atoi_base(char *str, char *base);
int		is_whitespace(char c);

int	ft_numlen(long num, int base_length)
{
	int	i;

	if (num == 0)
		return (1);
	i = 0;
	while (num > 0)
	{
		num /= base_length;
		i++;
	}
	return (i);
}

void	check_negative(int *is_negative, long *num)
{
	if (*num < 0)
	{
		*num *= -1;
		*is_negative = 1;
	}
}

int	check_base1(char *base)
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
		if (base[i] == '+' || base[i] == '-' || is_whitespace(base[i]))
			return (0);
	}
	return (i);
}

char	*ft_itoa_base(int nbr, char *base, int i, int is_negative)
{
	long	num;
	int		base_length;
	char	*str;

	num = (long)nbr;
	str = NULL;
	base_length = check_base1(base);
	if (base_length > 1)
	{
		check_negative(&is_negative, &num);
		str = (char *)malloc(ft_numlen(num, base_length) + is_negative + 1);
		if (!str)
			return (NULL);
		i = ft_numlen(num, base_length) + is_negative - 1;
		if (is_negative)
			str[0] = '-';
		str[ft_numlen(num, base_length) + is_negative] = '\0';
		while (i >= is_negative)
		{
			str[i--] = base[num % base_length];
			num /= base_length;
		}
	}
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num_1;
	char	*str;

	if (check_base1(base_from) > 1 && check_base1(base_to) > 1)
	{
		num_1 = ft_atoi_base(nbr, base_from);
		str = ft_itoa_base(num_1, base_to, 0, 0);
		return (str);
	}
	return (NULL);
}
/*
int	main(void)
{
	char *str = "-10100";
	char *base_from = "01";
	char *base_to = "0123456789";
	printf("Output: %s", ft_convert_base(str, base_from, base_to));
}*/