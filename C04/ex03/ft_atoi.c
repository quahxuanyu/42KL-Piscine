/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:46:40 by xquah             #+#    #+#             */
/*   Updated: 2024/01/23 17:43:58 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	return (c == '\n' || c == '\t' || c == '\v' || c == '\f'
		|| c == '\r' || c == ' ');
}

int	get_negative(char **str)
{
	int	i;
	int	state;

	state = 0;
	i = 0;
	while (**str == '-' || **str == '+')
	{
		if (**str == '-')
			state = !state;
		(*str)++;
	}
	return (state);
}

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	is_negative;

	i = -1;
	num = 0;
	while (ft_isspace(*str))
		str++;
	is_negative = get_negative(&str);
	while (str[++i] >= '0' && str[i] <= '9')
		num = (num * 10) + str[i] - '0';
	if (is_negative)
		num = num * -1;
	return (num);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_atoi("\n\n\n\n\n		--+-+-+---++12423asdaqw402"));
}

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	is_negative;

	i = -1;
	num = 0;
	is_negative = 0;
	while (*str == '\n' || *str == '\t' || *str == '\v' || *str == '\f'
		|| *str == '\r' || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_negative = !is_negative;
		str++;
	}
	while (str[++i] >= '0' && str[i] <= '9')
		num = (num * 10) + str[i] - '0';
	if (is_negative)
		num = num * -1;
	return (num);
}
*/
