/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 11:41:09 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/06 11:41:13 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_top(int x, int y)
{
	int a;

	if ((x > 0) && (y > 0))
	{
		ft_putchar('o');
		if (x > 2)
		{
			a = 2;
			while (a++ < x)
			{
				ft_putchar('-');
			}
		}
		if (x > 1)
		{
			ft_putchar('o');
		}
		ft_putchar('\n');
	}
}

void	ft_middle(int x, int y)
{
	int b;
	int c;

	if ((y > 2) && (x > 0))
	{
		b = 2;
		while (b++ < y)
		{
			ft_putchar('|');
			if (x > 2)
			{
				c = 2;
				while (c++ < x)
				{
					ft_putchar(' ');
				}
			}
			if (x > 1)
			{
				ft_putchar('|');
			}
			ft_putchar('\n');
		}
	}
}

void	ft_bottom(int x, int y)
{
	int d;

	if ((y > 1) && (x > 0))
	{
		ft_putchar('o');
		if (x > 2)
		{
			d = 2;
			while (d++ < x)
			{
				ft_putchar('-');
			}
		}
		if (x > 1)
		{
			ft_putchar('o');
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	ft_top(x, y);
	ft_middle(x, y);
	ft_bottom(x, y);
}
