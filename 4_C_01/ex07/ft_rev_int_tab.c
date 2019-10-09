/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 18:38:07 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/08 21:09:08 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int end;
	int begin;
	int swap;

	end = size;
	begin = 0;
	while (end > begin)
	{
		end--;
		swap = tab[end];
		tab[end] = tab[begin];
		tab[begin] = swap;
		begin++;
	}
}
