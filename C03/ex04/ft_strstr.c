/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:24:45 by xquah             #+#    #+#             */
/*   Updated: 2024/01/17 12:01:23 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	temp_i;
	int	j;

	i = -1;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[++i] != '\0')
	{
		temp_i = i;
		while (str[i] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i - j]);
			j++;
			i++;
		}
		j = 0;
		i = temp_i;
	}
	return (NULL);
}
/*
int main(void)
{

	printf("%s", ft_strstr("Hello world!", "world!"));
}*/