/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xquah <xquah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:42:26 by xquah             #+#    #+#             */
/*   Updated: 2024/01/21 16:42:29 by xquah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	check_left_line(int arr[4], int left)
{
	int	i;
	int	counter;
	int	max;

	i = -1;
	counter = 0;
	max = 0;
	while (++i < 4)
	{
		if (arr[i] > max)
		{
			counter++;
			max = arr[i];
		}
	}
	if (counter != left)
	{
		return (0);
	}
	return (1);
}

int	check_right_line(int arr[4], int right)
{
	int	i;
	int	counter;
	int	max;

	i = 4;
	counter = 0;
	max = 0;
	while (--i > -1)
	{
		if (arr[i] > max)
		{
			counter++;
			max = arr[i];
		}
	}
	if (counter != right)
	{
		return (0);
	}
	return (1);
}

int	check_line(int arr[4], int left, int right)
{
	if (check_left_line(arr, left) && check_right_line(arr, right))
		return (1);
	else
		return (0);
}
