/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 19:36:36 by xquah             #+#    #+#             */
/*   Updated: 2024/01/20 19:36:37 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	put_str(char *str);
void	rush(int **pov);
void	print_array(int *arr);

int	*g_pov[4];

int	*process_input(char str[], int range1, int range2)
{
	int	i;
	int	*arr;
	int	counter;

	arr = (int *) malloc(4);
	str += range1 * 2;
	i = range1 - 1;
	counter = 0;
	while (++i <= range2)
	{
		arr[counter] = *str - '0';
		str += 2;
		counter++;
	}
	return (arr);
}

int	**verify(char *argv[])
{
	g_pov[0] = process_input(argv[1], 0, 3);
	g_pov[1] = process_input(argv[1], 4, 7);
	g_pov[2] = process_input(argv[1], 8, 11);
	g_pov[3] = process_input(argv[1], 12, 15);
	return (g_pov);
}
