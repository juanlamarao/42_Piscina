/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 20:46:03 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/14 18:26:21 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int number;
	int r;

	number = 0;
	while ((number < n))
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
