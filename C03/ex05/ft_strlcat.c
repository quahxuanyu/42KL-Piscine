/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:12:18 by xquah             #+#    #+#             */
/*   Updated: 2024/01/17 12:54:41 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	initial_dest_length;

	initial_dest_length = ft_strlen(dest);
	if (size <= initial_dest_length)
	{
		return (size + ft_strlen(src));
	}
	j = -1;
	i = initial_dest_length;
	while (src[++j] != '\0' && j < (size - initial_dest_length - 1))
	{
		dest[i++] = src[j];
	}
	dest[i] = '\0';
	return (initial_dest_length + ft_strlen(src));
}

/*
int main(void)
{
	char str1[11] = "123456789";
	char str2[11] = "0123456789";
	printf("Return length:  %i\n", ft_strlcat(str1, str2, 11));
	printf("Destination: %s", str1);
}*/