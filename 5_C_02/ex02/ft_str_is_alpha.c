/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:36:03 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/09 16:41:20 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int number;

	number = 0;
	while (str[number] != '\0')
	{
		if ((str[number] < 65) || (str[number] > 90))
		{
			if (str[number] < 97 || str[number] > 122)
				return (0);
		}
		number++;
	}
	return (1);
}
