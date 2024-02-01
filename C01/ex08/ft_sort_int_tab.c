/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:58:14 by xquah             #+#    #+#             */
/*   Updated: 2024/01/15 16:24:08 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	i_2;
	int	a_holder;
	int	b_holder;

	i = -1;
	while (++i < size)
	{
		i_2 = i;
		while (--i_2 >= 0)
		{
			if (tab[i_2] > tab[i_2 + 1])
			{
				a_holder = tab[i_2];
				b_holder = tab[i_2 + 1];
				tab[i_2] = b_holder;
				tab[i_2 + 1] = a_holder;
			}
			else
				break ;
		}
	}
}
