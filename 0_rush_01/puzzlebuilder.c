/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzlebuilder.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 00:09:05 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/13 02:06:39 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		buildupperrow(int n, char *str, int puzzle[6][6])
{
	int x;

	x = 1;
	while (n <= 6)
	{
		if (n % 2 == 0)
		{
			puzzle[0][x] = str[n] - '0';
			x++;
		}
		n++;
	}
	return (n);
}

int		builddownrow(int n, char *str, int puzzle[6][6])
{
	int x;

	x = 1;
	while (n <= 14)
	{
		if (n % 2 == 0)
		{
			puzzle[5][x] = str[n] - '0';
			x++;
		}
		n++;
	}
	return (n);
}

int		buildleftcolumn(int n, char *str, int puzzle[6][6])
{
	int x;

	x = 1;
	while (n <= 22)
	{
		if (n % 2 == 0)
		{
			puzzle[x][0] = str[n] - '0';
			x++;
		}
		n++;
	}
	return (n);
}

int		buildrightcolumn(int n, char *str, int puzzle[6][6])
{
	int x;

	x = 1;
	while (n <= 30)
	{
		if (n % 2 == 0)
		{
			puzzle[x][5] = str[n] - '0';
			x++;
		}
		n++;
	}
	return (n);
}

void	buildpuzzle(char *str, int puzzle[6][6])
{
	int n;

	n = 0;
	n = buildupperrow(n, str, puzzle);
	n = builddownrow(n, str, puzzle);
	n = buildleftcolumn(n, str, puzzle);
	n = buildrightcolumn(n, str, puzzle);
}
