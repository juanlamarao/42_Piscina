/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 22:44:05 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/18 18:32:02 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *c);

void	ft_strswap(char **str1, char **str2);

int		ft_strcmp(char *str1, char *str2);

int		main(int argc, char *argv[])
{
	int count1;
	int count2;

	if (argc == 1)
		return (0);
	count1 = 0;
	while (++count1 <= (argc - 1))
	{
		count2 = count1;
		while (++count2 < argc)
		{
			if (ft_strcmp(argv[count1], argv[count2]) > 0)
				ft_strswap(&argv[count1], &argv[count2]);
		}
	}
	count1 = 0;
	while (++count1 < argc)
	{
		ft_putstr(argv[count1]);
		ft_putstr("\n");
	}
}

int		ft_strcmp(char *str1, char *str2)
{
	int index;

	index = 0;
	while ((str1[index]) || (str2[index]))
	{
		if ((str1[index]) != (str2[index]))
			return (str1[index] - str2[index]);
		index++;
	}
	return (0);
}

void	ft_strswap(char **str1, char **str2)
{
	char *swap;

	swap = *str1;
	*str1 = *str2;
	*str2 = swap;
}

void	ft_putstr(char *c)
{
	int index;

	index = 0;
	while (c[index])
	{
		write(1, &c[index], 1);
		index++;
	}
}
