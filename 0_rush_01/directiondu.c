/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   directiondu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 15:22:42 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/14 16:02:21 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	directionduvalidation(int c, int puzzle[6][6]);

int	directiondu(int puzzle[6][6])
{
	int c;

	c = 1;
	while (c < 5)
	{
		if (!directionduvalidation(c, puzzle))
			return (0);
		c++;
	}
	return (1);
}

int	directionduvalidation(int c, int puzzle[6][6])
{
	int r;
	int n;
	int visibility;

	r = 3;
	n = puzzle[4][c];
	visibility = 1;
	while (r > 0)
	{
		if (puzzle[r][c] > n)
		{
			visibility++;
			n = puzzle[r][c];
		}
		r--;
	}
	if (puzzle[5][c] == visibility)
		return (1);
	else
		return (0);
}
