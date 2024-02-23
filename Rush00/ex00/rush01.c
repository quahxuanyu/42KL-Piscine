/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 10:39:52 by xquah             #+#    #+#             */
/*   Updated: 2024/01/13 10:58:14 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	print_row(int x, char first_char, char middle_char, char last_char)
{
	int	x_counter;

	x_counter = 1;
	while (x_counter <= x)
	{
		if (x_counter == 1)
		{
			ft_putchar(first_char);
		}
		else if (x_counter == x)
		{
			ft_putchar(last_char);
		}
		else
		{
			ft_putchar(middle_char);
		}
		x_counter++;
	}
}

void	rush(int x, int y)
{
	int	y_counter;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	y_counter = 1;
	while (y_counter <= y)
	{
		if (y_counter == 1)
		{
			print_row(x, '/', '*', '\\');
		}
		else if (y_counter == y)
		{
			print_row(x, '\\', '*', '/');
		}
		else
		{
			print_row(x, '*', ' ', '*');
		}
		ft_putchar('\n');
		y_counter++;
	}
}
