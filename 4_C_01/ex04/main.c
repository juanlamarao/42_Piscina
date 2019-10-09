/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:54:12 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/08 14:26:36 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int num1;
	int num2;

	num1 = 5;
	num2 = 2;
	ft_ultimate_div_mod(&num1, &num2);
	printf("Divisão de num1 por num2: %d\n", num1);
	printf("Resto de num1 por num2: %d\n", num2);
}
