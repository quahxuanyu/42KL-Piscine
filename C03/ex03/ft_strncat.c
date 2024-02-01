/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:06:34 by xquah             #+#    #+#             */
/*   Updated: 2024/01/17 11:10:27 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = -1;
	j = -1;
	while (dest[++i] != '\0')
	{
		continue ;
	}
	while (src[++j] != '\0' && j < nb)
	{
		dest[i++] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
