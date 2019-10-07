/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 10:41:48 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/06 23:45:22 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int first;
	int second;
	int third;

	first = -1;
	while (first++ < 7)
	{
		second = first;
		while (second++ < 8)
		{
			third = second;
			while (third++ < 9)
			{
				ft_putchar(first + '0');
				ft_putchar(second + '0');
				ft_putchar(third + '0');
				if (first != 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
