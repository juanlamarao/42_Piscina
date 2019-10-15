/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibilitytestrl.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 01:35:17 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/13 21:17:17 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	directionrl(int r, int puzzle[6][6])
{
	int c;
	int n;
	int visibility;

	c = 3;
	n = puzzle[r][4];
	visibility = 1;
	while (c > 0)
	{
		if (puzzle[r][c] > n)
		{
			visibility++;
			n = puzzle[r][c];
		}
		c--;
	}
	if (puzzle[r][5] == visibility)
		return (1);
	else
		return (0);
}
