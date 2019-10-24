/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:23:36 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/18 07:13:46 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int factorial;

	factorial = nb;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		while (--nb > 0)
			factorial = factorial * nb;
		return (factorial);
	}
}
