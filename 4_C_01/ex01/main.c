/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 22:27:37 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/08 18:15:26 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int		main(void)
{
	int number;
	int *pointer1;
	int **pointer2;
	int ***pointer3;
	int ****pointer4;
	int *****pointer5;
	int ******pointer6;
	int *******pointer7;
	int ********pointer8;
	int *********pointer9;

	number = 10;
	pointer1 = &number;
	pointer2 = &pointer1;
	pointer3 = &pointer2;
	pointer4 = &pointer3;
	pointer5 = &pointer4;
	pointer6 = &pointer5;
	pointer7 = &pointer6;
	pointer8 = &pointer7;
	pointer9 = &pointer8;
	printf("Valor do ponteiro(x9): %d\n", *********pointer9);
	printf("EXECUCAO DA FUNCAO\n");
	ft_ultimate_ft(pointer9);
	printf("Novo valor do ponteiro(x9): %d\n", *********pointer9);
}
