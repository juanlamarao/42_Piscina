/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reducepuzzle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 00:35:01 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/13 02:38:44 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	reducepuzzlecolumns2(int n, int puzzle[6][6])
{
	if (puzzle[0][n] == 1)
		puzzle[1][n] = 4;
	if (puzzle[5][n] == 1)
		puzzle[4][n] = 4;
	if (puzzle[0][n] == 3 && puzzle[5][n] == 2)
		puzzle[3][n] = 4;
	if (puzzle[5][n] == 3 && puzzle[0][n] == 2)
		puzzle[2][n] = 4;
	if (puzzle[0][n] == 1 && puzzle[5][n] == 2)
		puzzle[4][n] = 3;
	if (puzzle[5][n] == 1 && puzzle[0][n] == 2)
		puzzle[1][n] = 3;
}

void	reducepuzzlerows2(int n, int puzzle[6][6])
{
	if (puzzle[n][0] == 1)
		puzzle[n][1] = 4;
	if (puzzle[n][5] == 1)
		puzzle[n][4] = 4;
	if (puzzle[n][0] == 3 && puzzle[n][5] == 2)
		puzzle[n][3] = 4;
	if (puzzle[n][5] == 3 && puzzle[n][0] == 2)
		puzzle[n][2] = 4;
	if (puzzle[n][0] == 1 && puzzle[n][5] == 2)
		puzzle[n][4] = 3;
	if (puzzle[n][5] == 1 && puzzle[n][0] == 2)
		puzzle[n][1] = 3;
}

void	reducepuzzlecolumns(int n, int puzzle[6][6])
{
	if (puzzle[0][n] == 4)
	{
		puzzle[1][n] = 1;
		puzzle[2][n] = 2;
		puzzle[3][n] = 3;
		puzzle[4][n] = 4;
	}
	reducepuzzlecolumns2(n, puzzle);
	if (puzzle[5][n] == 4)
	{
		puzzle[4][n] = 1;
		puzzle[3][n] = 2;
		puzzle[2][n] = 3;
		puzzle[1][n] = 4;
	}
	reducepuzzlerows2(n, puzzle);
}

void	reducepuzzlerows(int n, int puzzle[6][6])
{
	if (puzzle[n][0] == 4)
	{
		puzzle[n][1] = 1;
		puzzle[n][2] = 2;
		puzzle[n][3] = 3;
		puzzle[n][4] = 4;
	}
	if (puzzle[n][5] == 4)
	{
		puzzle[n][4] = 1;
		puzzle[n][3] = 2;
		puzzle[n][2] = 3;
		puzzle[n][1] = 4;
	}
}
