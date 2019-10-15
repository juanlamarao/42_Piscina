/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 18:51:27 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/13 22:10:52 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		puzzleblank(int puzzle[6][6])
{
	int x;
	int y;

	x = 1;
	y = 1;
	while (x < 5)
	{
		while (y < 5)
		{
			if (puzzle[x][y] == 0)
				return (1);
			y++;
		}
		y = 1;
		x++;
	}
	return (0);
}

int		checkcolumn(char *str)
{
	int count;
	int j;

	count = 0;
	j = 0;
	while (count <= 6)
	{
		if (str[count] == '4' && str[count + 8] == '4')
			return (1);
		if (str[count] == '4' && str[count + 8] != '1')
			return (1);
		if (str[count + 8] == '4' && str[count] != '1')
			return (0);
		count += 2;
	}
	return (0);
}

int		checkrows(char *str)
{
	int count;
	int j;

	count = 16;
	j = 0;
	while (count <= 22)
	{
		if (str[count] == '4' && str[count + 8] == '4')
			return (1);
		if (str[count] == '4' && str[count + 8] != '1')
			return (1);
		if (str[count + 8] == '4' && str[count] != '1')
			return (1);
		count += 2;
	}
	return (0);
}

int		validate(char *str)
{
	if (checkcolumn(str) || checkrows(str))
		return (1);
	else
		return (0);
}
