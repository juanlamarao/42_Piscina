/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 09:31:52 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/09 11:54:13 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int number;

	number = 0;
	while (src[number] != '\0')
	{
		dest[number] = src[number];
		number++;
	}
	dest[number] = src[number];
	return (dest);
}
