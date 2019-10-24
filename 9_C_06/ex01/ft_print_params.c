/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 22:04:49 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/18 18:25:02 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *c);

int		main(int argc, char *argv[])
{
	int count;

	count = 1;
	while (count < argc)
	{
		ft_putstr(argv[count]);
		ft_putstr("\n");
		count++;
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
