/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:04:15 by xquah             #+#    #+#             */
/*   Updated: 2024/01/30 16:03:13 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i])
		if (charset[i] == c)
			return (1);
	if (c == '\0')
		return (1);
	return (0);
}

int	get_size(char *str, char *sep)
{
	int	i;
	int	length;

	i = -1;
	length = 0;
	while (str[++i])
	{
		if (!is_sep(str[i], sep) && is_sep(str[i + 1], sep))
			length++;
	}
	return (length);
}

void	str_putword(char *dest, char *src, char *sep)
{
	int	i;

	i = -1;
	while (!is_sep(src[++i], sep))
		dest[i] = src[i];
	dest[i] = '\0';
}

void	insert_words(char **arr, char *str, char *sep)
{
	int	i;
	int	j;
	int	w_count;

	i = 0;
	w_count = 0;
	while (str[i] != '\0')
	{
		if (is_sep(str[i], sep))
			i++;
		else
		{
			j = 0;
			while (!is_sep(str[i + j], sep))
				j++;
			arr[w_count] = (char *) malloc(j + 1);
			str_putword(arr[w_count], str + i, sep);
			i = i + j;
			w_count++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		total_size;

	total_size = get_size(str, charset);
	arr = (char **) malloc(sizeof(char *) * (total_size + 1));
	insert_words(arr, str, charset);
	arr[total_size] = 0;
	return (arr);
}
/*
int main(void)
{
    char **arr;
	char *str;
	char *sep;

	str = ",,,,,,,hello,,,,world,,,,,,,";
	sep = ",";
    arr = ft_split(str, sep);
	printf("String: \"%s\"\nSeperator: \"%s\"\n", str, sep);
    for (int i = 0; arr[i] != 0; i++)
    {
        printf("Output %d: %s\n", i + 1, arr[i]);
        free(arr[i]);
    }
    free(arr);
    return 0;
}
*/
