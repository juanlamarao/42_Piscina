/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 22:55:51 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/07 23:04:12 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int		main(void)
{
	int nbr;

	nbr = 10;
	printf("%d\n", nbr);
	printf("EXECUCAO DA FUNCAO ft_ft\n");
	ft_ft(&nbr);
	printf("%d\n", nbr);
	return (0);
}
