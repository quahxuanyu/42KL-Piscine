/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:10:23 by xquah             #+#    #+#             */
/*   Updated: 2024/01/14 16:41:07 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a_holder;
	int	b_holder;

	i = 0;
	size--;
	while (i < size)
	{
		a_holder = tab[i];
		b_holder = tab[size];
		tab[i] = b_holder;
		tab[size] = a_holder;
		i++;
		size--;
	}
}
