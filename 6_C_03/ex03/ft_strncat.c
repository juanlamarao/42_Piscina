/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:57:12 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/16 10:05:57 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int sizesrc;
	unsigned int sizedest;

	sizesrc = 0;
	sizedest = 0;
	while (dest[sizedest])
		sizedest++;
	while ((sizesrc < nb) && (src[sizesrc]))
	{
		dest[sizedest] = src[sizesrc];
		sizesrc++;
		sizedest++;
	}
	dest[sizedest] = '\0';
	return (dest);
}
