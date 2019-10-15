/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:04:21 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/10 17:10:29 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned	int number;

	number = 0;
	while ((number < n) && (src[number]))
	{
		dest[number] = src[number];
		number++;
	}
	while (number < n)
	{
		dest[number] = '\0';
		number++;
	}
	return (dest);
}
