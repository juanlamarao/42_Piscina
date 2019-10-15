/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thispuzzlespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 15:59:06 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/14 16:23:52 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		directionlr(int r, int puzzle[6][6]);

int		directionrl(int r, int puzzle[6][6]);

int		directiondu(int puzzle[6][6]);

int		partialdirectionud(int c, int puzzle[6][6]);

int		solvepuzzle(int r, int c, int puzzle[6][6]);

int		samecolumn(int c, int num, int puzzle[6][6]);

int		samerow(int r, int num, int puzzle[6][6]);

int		validation(int r, int c, int puzzle[6][6]);

int		thispuzzlespace(int *num, int *r, int *c, int puzzle[6][6])
{
	while (*num < 5)
	{
		if ((!samerow(*r, *num, puzzle)) && (!samecolumn(*c, *num, puzzle)))
		{
			puzzle[*r][*c] = *num;
			if (validation(*r, *c, puzzle) == 0)
				return (0);
			if (validation(*r, *c, puzzle) == 1)
				return (1);
		}
		++*num;
	}
	return (0);
}

int		validation(int r, int c, int puzzle[6][6])
{
	if ((r == 4) && (c == 4))
	{
		if ((!directionlr(r, puzzle)) || (!directionrl(r, puzzle)) ||
				(!directiondu(puzzle)))
			return (0);
		return (1);
	}
	if (c < 4)
	{
		if (partialdirectionud(c, puzzle))
			c = c + 1;
	}
	else
	{
		if ((!directionlr(r, puzzle)) || (!directionrl(r, puzzle)))
			return (0);
		if (partialdirectionud(c, puzzle))
		{
			c = 1;
			r = r + 1;
		}
	}
	if (solvepuzzle(r, c, puzzle))
		return (1);
	return (2);
}
