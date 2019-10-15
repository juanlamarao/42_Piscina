/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:41:11 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/10 13:03:38 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int number;

	number = 0;
	while (str[number] != '\0')
	{
		if ((str[number] > 64) && (str[number] < 91))
			str[number] = str[number] + 32;
		number++;
	}
	return (str);
}
