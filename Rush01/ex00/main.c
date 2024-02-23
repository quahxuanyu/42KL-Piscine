/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 10:57:48 by xquah             #+#    #+#             */
/*   Updated: 2024/01/21 14:58:10 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	rush(int *povs[]);
int		**verify(char *argv[]);
void	put_str(char *str);

int	check_correct_input(char str[])
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
	{
		if (i % 2 == 0 && (str[i] <= '0' || str[i] >= '9'))
		{
			return (0);
		}
		else if (i % 2 != 0 && (str[i] != ' '))
		{
			return (0);
		}
	}
	if (i == 31)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		put_str("Error\n");
		return (0);
	}
	if (!check_correct_input(argv[1]))
	{
		put_str("Error\n");
		return (0);
	}
	rush(verify(argv));
}
