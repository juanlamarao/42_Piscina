/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 18:38:12 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/08 21:06:28 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int array[5];

	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;
	printf("Antes:\n");
	printf("%i\n", array[0]);
	printf("%i\n", array[1]);
	printf("%i\n", array[2]);
	printf("%i\n", array[3]);
	printf("%i\n", array[4]);
	printf("---Execução da Função---\n");
	ft_rev_int_tab(array, 5);
	printf("Depois:\n");
	printf("%i\n", array[0]);
	printf("%i\n", array[1]);
	printf("%i\n", array[2]);
	printf("%i\n", array[3]);
	printf("%i\n", array[4]);
}
