/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:01:27 by xquah             #+#    #+#             */
/*   Updated: 2024/01/16 17:02:41 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

int	is_printable(char c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	convert_to_hex(char c)
{
	char	num;
	char	character;

	num = c / 16 + '0';
	if (c % 16 < 10)
	{
		character = (c % 16) + '0';
	}
	else
	{
		character = (c % 16) + 87;
	}
	put_char('\\');
	put_char(num);
	put_char(character);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
	{
		if (is_printable(str[i]))
		{
			put_char(str[i]);
		}
		else
		{
			convert_to_hex(str[i]);
		}
	}
}
