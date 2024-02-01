/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 10:58:19 by xquah             #+#    #+#             */
/*   Updated: 2024/01/12 11:12:50 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	holder_a;
	int	holder_b;

	holder_a = *a;
	holder_b = *b;
	*a = holder_b;
	*b = holder_a;
}
