/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 23:52:37 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/10 18:15:32 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_alpha(char str)
{
	if (str < 65 || str > 90)
	{
		if (str < 97 || str > 122)
		{
			return (0);
		}
	}
	return (1);
}

int		ft_alphanum(char str)
{
	if ((str < 48) || (str > 57))
	{
		if ((str < 65) || (str > 90))
		{
			if ((str < 97) || (str > 122))
			{
				return (0);
			}
		}
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int n;

	if ((str[0] > 96) && (str[0] < 123))
	{
		str[0] = str[0] - 32;
	}
	n = 1;
	while (str[n] != '\0')
	{
		if ((ft_alpha(str[n]) == 1) && ((ft_alphanum(str[n - 1]) == 0)))
		{
			if ((str[n] > 96) && (str[n] < 123))
			{
				str[n] = str[n] - 32;
			}
		}
		else if ((str[n] > 64) && (str[n] < 91))
		{
			str[n] = str[n] + 32;
		}
		n++;
	}
	return (str);
}
