/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:56:55 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/16 20:03:50 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int number;

	number = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (number <= (nb / 2))
	{
		if (nb % number == 0)
			return (0);
		number++;
	}
	return (1);
}
