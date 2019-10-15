/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 20:51:09 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/14 22:21:01 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	buildpuzzle(char *str, int puzzle[6][6]);
void	reducepuzzlecolumns(int n, int puzzle[6][6]);
void	reducepuzzlerows(int n, int puzzle[6][6]);
void	resolvepuzzle(int puzzle[6][6]);
int		empty(int argc);
int		wrongstring(char *str);
int		wrongcharacter(char *str);
int		validate(char *str);
int		puzzleblank(int puzzle[6][6]);
void	printpuzzle(int puzzle[6][6]);
void	buildpuzzlezero(int puzzle[6][6]);

void	reducepuzzle(int puzzle[6][6])
{
	int n;

	n = 1;
	while (n < 5)
	{
		reducepuzzlecolumns(n, puzzle);
		n++;
	}
	n = 1;
	while (n < 5)
	{
		reducepuzzlerows(n, puzzle);
		n++;
	}
}

int		main(int argc, char **argv)
{
	int puzzle[6][6];

	if (empty(argc) || wrongstring(argv[1]) || wrongcharacter(argv[1])
			|| validate(argv[1]))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	buildpuzzlezero(puzzle);
	printpuzzle(puzzle);
	write(1, "\n", 1);
	buildpuzzle(argv[1], puzzle);
	printpuzzle(puzzle);
	reducepuzzle(puzzle);
	write(1, "\n", 1);
	printpuzzle(puzzle);
	write(1, "\n", 1);
	resolvepuzzle(puzzle);
	if (puzzleblank(puzzle))
	{
		write(1, "Erro!\n", 6);
		write(1, "Sem solução!!\n", 16);
		return (0);
	}
	printpuzzle(puzzle);
}
