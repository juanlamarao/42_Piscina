/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:48:13 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/09 17:09:11 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int number;

	number = 0;
	while (str[number] != '\0')
	{
		if ((str[number] < 65) || (str[number] > 90))
			return (0);
		number++;
	}
	return (1);
}
