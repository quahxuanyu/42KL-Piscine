/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 11:47:34 by xquah             #+#    #+#             */
/*   Updated: 2024/01/28 14:46:15 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
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
		str[i] = src[i];
	str[i] = '\0';
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*arr;

	arr = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (arr == NULL)
		return (NULL);
	i = -1;
	while (++i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
	}
	arr[i].str = 0;
	return (arr);
}

int	main(int argc, char **argv)
{
	t_stock_str	*stock_ptr;
	int			i;

	i = 0;
	stock_ptr = ft_strs_to_tab(argc, argv);
	ft_show_tab(stock_ptr);
	return (0);
}
