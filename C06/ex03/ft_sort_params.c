/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:28:18 by xquah             #+#    #+#             */
/*   Updated: 2024/01/25 14:21:13 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_str(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		write(1, &str[i], 1);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*a_holder;

	i = -1;
	while (++i < argc)
	{
		j = i;
		while (--j >= 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				a_holder = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = a_holder;
			}
			else
				break ;
		}
	}
	i = 0;
	while (++i < argc)
	{
		put_str(argv[i]);
	}
}
