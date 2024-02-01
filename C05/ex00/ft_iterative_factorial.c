/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:57:36 by xquah             #+#    #+#             */
/*   Updated: 2024/01/23 13:05:20 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	num;

	num = nb;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (--nb > 1)
		num = (num * nb);
	return (num);
}
