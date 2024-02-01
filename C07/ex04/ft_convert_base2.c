/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:05:37 by xquah             #+#    #+#             */
/*   Updated: 2024/01/29 11:05:38 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	is_whitespace(char c)
{
	return (c == '\n' || c == '\t' || c == '\v' || c == '\f'
		|| c == '\r' || c == ' ');
}

int	reverse_base(char *input, int *hash, int base_len)
{
	int	num;

	num = 0;
	while (*input != '\0')
	{
		if (hash[(int) *input] != -1)
			num = num * base_len + hash[(int) *input];
		else
			break ;
		input++;
	}
	return (num);
}

int	check_base(char *base, int hash[256])
{
	int	i;
	int	z;

	i = -1;
	while (++i < 256)
		hash[i] = -1;
	i = -1;
	while (base[++i] != '\0')
	{
		z = -1;
		while (base[++z])
			if (base[i] == base[z] && i != z)
				return (0);
		if (base[i] == '+' || base[i] == '-' || is_whitespace(base[i]))
			return (0);
		hash[(int) base[i]] = i;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_length;
	int	num;
	int	is_negative;
	int	hash[256];

	num = 0;
	is_negative = 0;
	while (is_whitespace(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_negative = !is_negative;
		str++;
	}
	base_length = check_base(base, hash);
	if (base_length > 1 && !is_whitespace(*str))
	{
		num = reverse_base(str, hash, base_length);
	}
	if (is_negative)
		num *= -1;
	return (num);
}
