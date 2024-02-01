/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:27:40 by xquah             #+#    #+#             */
/*   Updated: 2024/01/12 11:34:16 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_holder;
	int	b_holder;

	a_holder = *a;
	b_holder = *b;
	*a = a_holder / b_holder;
	*b = a_holder % b_holder;
}
