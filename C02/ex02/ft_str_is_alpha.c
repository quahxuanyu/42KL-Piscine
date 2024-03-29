/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:36:44 by xquah             #+#    #+#             */
/*   Updated: 2024/01/16 11:05:22 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
	{
		if ((str[i] > '@' && str[i] < '[') || (str[i] > '`' && str[i] < '{'))
		{
			continue ;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
