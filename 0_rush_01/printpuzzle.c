/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printpuzzle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 02:07:28 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/14 22:04:49 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printpuzzle(int puzzle[6][6])
{
	int r;
	int c;

	r = 0;
	while (r < 6)
	{
		c = 0;
		while (c < 6)
		{
			ft_putchar(puzzle[r][c] + '0');
			if (c != 5)
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
