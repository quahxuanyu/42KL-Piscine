#include <stdlib.h>
#include "ft_stock_str.h"
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

char	*ft_strdup(char *src)
{
	int		length;
	int		i;
	char	*dup;

	if (src == NULL)
		return (NULL);
	length = ft_strlen(src);
	dup = (char *)malloc((length + 1) * sizeof(char));
	i = 0;
	if (dup == NULL)
		return (NULL);
	while (i < length)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*res;
	int			i;

	if (ac < 1)
		return (NULL);
	res = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		res[i].size = ft_strlen(av[i]);
		res[i].str = av[i];
		res[i].copy = ft_strdup(av[i]);
		i++;
	}
	res[i].str = 0;
	return (res);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_str *par);

int	main(int argc, char **argv)
{
	t_stock_str	*stock_ptr;
	int i;

	i = -1;
	stock_ptr = ft_strs_to_tab(argc, argv);
	while (++i < argc)
	{
		printf("%d\n", stock_ptr[i].size);
		puts(stock_ptr[i].str);
		puts(stock_ptr[i].copy);
	}
	return (0);
}