/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:26:37 by xquah             #+#    #+#             */
/*   Updated: 2024/01/16 11:28:45 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
