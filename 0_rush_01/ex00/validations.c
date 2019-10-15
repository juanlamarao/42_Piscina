/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:09:39 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/14 15:01:55 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		empty(int argc)
{
	if (argc != 2)
		return (1);
	else
		return (0);
}

int		wrongstring(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	if (count != 31)
		return (1);
	else
		return (0);
}

int		wrongcharacter(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((count % 2 == 0) && (str[count] < 49 || str[count] > 52))
			return (1);
		if (count % 2 == 1 && str[count] != 32)
			return (1);
		count++;
	}
	return (0);
}
