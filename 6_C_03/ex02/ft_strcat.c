/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 21:06:46 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/10 22:14:40 by juolivei         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int sizedest;
	int sizesrc;
	int total;
	int nsrc;

	sizesrc = ft_strlen(src);
	sizedest = ft_strlen(dest);
	total = sizesrc + sizedest;
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
