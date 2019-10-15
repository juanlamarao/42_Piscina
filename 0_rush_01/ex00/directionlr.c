/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   directionlr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 21:54:24 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/13 22:46:51 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	directionlr(int r, int puzzle[6][6])
{
	int c;
	int n;
	int visibility;

	c = 2;
	n = puzzle[r][1];
	visibility = 1;
	while (c < 5)
	{
		if (puzzle[r][c] > n)
		{
			visibility++;
			n = puzzle[r][c];
		}
		c++;
	}
	if (puzzle[r][0] == visibility)
		return (1);
	else
		return (0);
}
