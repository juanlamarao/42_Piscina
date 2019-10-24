/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 12:22:38 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/24 16:55:04 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char str)
{
	int index;

	if (str == '\t' || str == '\n' || str == '\v' || str == '\f' ||
			str == '\r' || str == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int n;
	int sign;
	int number;
	int numbersing;

	n = 0;
	sign = 1;
	number = 0;
	numbersing = 0;
	while (ft_isspace(str[n]))
		n++;
	while (str[n] == '-' || str[n] == '+')
	{
		if (str[n] == 45)
			numbersign++;
		n++;
	}
	if ((numbersign % 2) != 0)
		sign = -1;
	while ((str[n] > 47) && (str[n] < 58))
	{
		number = ((number * 10) + (str[n] - 48));
		n++;
	}
	return (sign * number);
}
