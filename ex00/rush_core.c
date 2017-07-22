/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_core.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 13:49:59 by mdeville          #+#    #+#             */
/*   Updated: 2017/07/22 14:30:03 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rushes.h"

void	rush_core(int x, int y)
{
	int	i;
	int	j;
	int len;
	char *tab;

	if (x > 0 && y > 0)
	{
		i = 0;
		len = y - 1;
		y = x - 1;
		x = len;
		len = y + 1;
		tab = (char *)malloc(sizeof(char) * ((x + 1) * y + 1));
		while (i <= x)
		{
			j = 0;
			while (j <= y)
			{
				tab[i][j] = choice(i, j, x, y);
				j++;
			}
			tab[i][j + 1] = '\n';
			i++;
		}
		tab[i][j + 2];
	}
}
