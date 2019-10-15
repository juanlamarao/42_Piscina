/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:08:14 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/09 16:50:22 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int number;

	number = 0;
	while (str[number] != '\0')
	{
		if ((str[number] < 48) || (str[number] > 57))
			return (0);
		number++;
	}
	return (1);
}
