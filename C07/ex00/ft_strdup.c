/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:45:26 by xquah             #+#    #+#             */
/*   Updated: 2024/01/26 11:28:21 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	str = (char *) malloc(ft_strlen(src) + 1);
	if (!str)
		return (NULL);
	i = -1;
	while (src[++i] != '\0')
	{
		str[i] = src[i];
	}
	str[i] = '\0';
	return (str);
}
