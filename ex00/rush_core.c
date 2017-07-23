/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_core.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 18:36:55 by mdeville          #+#    #+#             */
/*   Updated: 2017/07/23 09:43:46 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rushes.h"

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b - 1;
	*b = tmp - 1;
}

char	*rush_core(int x, int y, int index_rush)
{
	int				i;
	int				j;
	int				len;
	char			*tab;

	tab = (char *)malloc(sizeof(char) * ((x + 1) * y + 1));
	len = x + 1;
	i = 0;
	if (x > 0 && y > 0)
	{
		ft_swap(&x, &y);
		while (i <= x)
		{
			j = 0;
			while (j <= y)
			{
				tab[i * len + j] = g_rushtab[index_rush](i, j, x, y);
				j++;
			}
			tab[i * len + j] = '\n';
			i++;
		}
	}
	tab[i * len] = '\0';
	return (tab);
}
