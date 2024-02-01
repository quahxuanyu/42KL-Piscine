/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:42:20 by xquah             #+#    #+#             */
/*   Updated: 2024/01/17 11:05:47 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (dest[++i] != '\0')
	{
		continue ;
	}
	while (src[++j] != '\0')
	{
		dest[i++] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
