/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:18:59 by xquah             #+#    #+#             */
/*   Updated: 2024/01/27 16:48:40 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	stlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	total_stlen(char **strs, int size, int sep_len)
{
	int	ln;

	ln = stlen(strs[0]);
	if (size == 1)
		return (ln);
	return (ln + total_stlen(strs + 1, size - 1, sep_len) + sep_len);
}

char	*empty_string(void)
{
	char	*string;

	string = ((char *) malloc(1));
	string[0] = '\0';
	return (string);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*temp_sep;
	char	*string;

	if (size == 0)
		return (empty_string());
	string = (char *) malloc(total_stlen(strs, size, stlen(sep)) + 1);
	if (!string)
		return (NULL);
	i = -1;
	j = 0;
	while (++i < size)
	{
		while (*strs[i] != '\0')
			string[j++] = *strs[i]++;
		if (i + 1 != size)
		{
			temp_sep = sep;
			while (*temp_sep != '\0')
				string[j++] = *temp_sep++;
		}
	}
	string[j] = '\0';
	return (string);
}
/*
void	put_char(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char *str1[5] = {"hello", "my", "name", "is", "HEISEBERG"};
	char *str2[4] = { "", "Hello", "", "world" };
	char *str3[2] = { "Hello", "world" };
	char *empty[1] = {""};
	//free(ft_strjoin(0, empty, "-"));
	printf("%s", ft_strjoin(5, str1, "-"));
}*/