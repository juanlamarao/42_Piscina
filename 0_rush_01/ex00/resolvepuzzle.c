/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 16:24:15 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/14 15:01:18 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		solvepuzzle(int r, int c, int puzzle[6][6]);

void	printpuzzle(int puzzle[6][6]);

int		nextpuzzlespace(int *r, int *c, int puzzle[6][6]);

int		thispuzzlespace(int *num, int *r, int *c, int puzzle[6][6]);

int		resolvepuzzle(int puzzle[6][6])
{
	int r;
	int c;

	r = 1;
	c = 1;
	solvepuzzle(r, c, puzzle);
	return (1);
}

int		solvepuzzle(int r, int c, int puzzle[6][6])
{
	int num;

	num = 1;
	if (puzzle[r][c] != 0)
	{
		if (nextpuzzlespace(&r, &c, puzzle))
			return (1);
		return (0);
	}
	if (puzzle[r][c] == 0)
	{
		if (thispuzzlespace(&num, &r, &c, puzzle))
		{
			return (1);
		}
		puzzle[r][c] = 0;
		return (0);
	}
	return (0);
}
