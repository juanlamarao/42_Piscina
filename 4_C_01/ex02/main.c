/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 22:05:20 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/07 23:05:58 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int a;
	int b;

	a = 1;
	b = 2;
	printf("A = %d\n", a);
	printf("B = %d\n", b);
	printf("EXECUCAO DA FUNCAO TROCA\n");
	ft_swap(&a, &b);
	printf("A = %d\n", a);
	printf("B = %d\n", b);
	return (0);
}
