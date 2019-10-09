/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 10:57:08 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/08 11:16:17 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a;
	int b;
	int div;
	int rest;

	a = 5;
	b = 2;
	printf("Valor de A: %d\n", a);
	printf("Valor de B: %d\n", b);
	printf("EXECUCAO DA FUNCAO\n");
	ft_div_mod(a, b, &div, &rest);
	printf("Inteiro da divisão de A por B: %d\n", div);
	printf("Resto da divisao de A por B: %d\n", rest);
	return (0);
}
