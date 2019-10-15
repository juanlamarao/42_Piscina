/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 18:57:06 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/14 15:36:55 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int nstr;
	int ntofind;

	nstr = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[nstr])
	{
		ntofind = 0;
		while (to_find[ntofind] == str[nstr + ntofind])
		{
			if (to_find[ntofind + 1] == '\0')
				return (&str[nstr]);
			ntofind++;
		}
		nstr++;
	}
	return (0);
}
