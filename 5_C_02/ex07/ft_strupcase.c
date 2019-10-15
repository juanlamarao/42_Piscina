/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:28:21 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/10 13:00:35 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int number;

	number = 0;
	while (str[number] != '\0')
	{
		if ((str[number] > 96) && (str[number] < 123))
			str[number] = str[number] - 32;
		number++;
	}
	return (str);
}
