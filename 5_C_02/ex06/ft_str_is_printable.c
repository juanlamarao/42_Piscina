/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:30:45 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/09 17:23:25 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int number;

	number = 0;
	while (str[number] != '\0')
	{
		if ((str[number] < 32) || (str[number] == 127))
			return (0);
		number++;
	}
	return (1);
}
