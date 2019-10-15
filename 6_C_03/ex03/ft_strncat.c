/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 21:46:08 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/14 18:26:37 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int sizedest;
	int total;
	int nsrc;

	sizedest = ft_strlen(dest);
	total = nb + sizedest;
	nsrc = 0;
	while (sizedest < total)
	{
		dest[sizedest] = src[nsrc];
		sizedest++;
		nsrc++;
	}
	dest[sizedest] = '\0';
	return (dest);
}
