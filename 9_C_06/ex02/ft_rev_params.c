/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 22:20:39 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/18 18:26:34 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *c);

int		main(int argc, char *argv[])
{
	int reverse;

	reverse = argc - 1;
	while (reverse > 0)
	{
		ft_putstr(argv[reverse]);
		ft_putstr("\n");
		reverse--;
	}
}

void	ft_putstr(char *c)
{
	int index;

	index = 0;
	while (c[index])
	{
		write(1, &c[index], 1);
		index++;
	}
}
