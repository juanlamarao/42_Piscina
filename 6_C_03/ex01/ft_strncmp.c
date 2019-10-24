/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 20:46:03 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/15 13:42:43 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				r;
	unsigned int	number;

	number = 0;
	while ((number < n) && ((s1[number]) || (s2[number])))
	{
		if (s1[number] != s2[number])
		{
			r = s1[number] - s2[number];
			return (r);
		}
		number++;
	}
	return (0);
}
