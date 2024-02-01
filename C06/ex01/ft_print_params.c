/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:17:34 by xquah             #+#    #+#             */
/*   Updated: 2024/01/25 11:23:09 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_str(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		write(1, &str[i], 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (++i < argc)
	{
		put_str(argv[i]);
		put_str("\n");
	}
}
