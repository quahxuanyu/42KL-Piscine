/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:47:59 by xquah             #+#    #+#             */
/*   Updated: 2024/01/16 13:10:54 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanumeric(char c)
{
	if ((c > '@' && c < '[') || (c > '`' && c < '{') || (c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	upper(char *c)
{
	if (*c >= 'a' && *c <= 'z')
	{
		*c -= 32;
	}
}

void	lower(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
	{
		*c += 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	shd_upper;

	shd_upper = 1;
	i = -1;
	while (str[++i] != '\0')
	{
		if (is_alphanumeric(str[i]) && shd_upper)
		{
			upper(&str[i]);
			shd_upper = 0;
		}
		else if (is_alphanumeric(str[i]) && !shd_upper)
		{
			lower(&str[i]);
		}
		else if (!is_alphanumeric(str[i]))
		{
			shd_upper = 1;
		}
	}
	return (str);
}
