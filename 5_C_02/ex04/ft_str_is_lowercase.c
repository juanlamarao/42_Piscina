/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:49:30 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/09 17:01:22 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int number;

	number = 0;
	while (str[number] != '\0')
	{
		if ((str[number] < 97) || (str[number] > 122))
			return (0);
		number++;
	}
	return (1);
}
