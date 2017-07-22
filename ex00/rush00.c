/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 22:49:10 by mdeville          #+#    #+#             */
/*   Updated: 2017/07/08 15:46:33 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	choice(int i, int j, int i_max, int j_max)
{
	if ((i == 0 && j == 0) || (i == 0 && j == j_max) ||
		(i == i_max && j == 0) || (i == i_max && j == j_max))
		return ('o');
	else if (i == 0 || i == i_max)
		return ('-');
	else if (j == 0 || j == j_max)
		return ('|');
	return (' ');
}

void	rush00(int x, int y)
{
	int	i;
	int	j;
	int mem;

	if (x > 0 && y > 0)
	{
		i = 0;
		mem = y - 1;
		y = x - 1;
		x = mem;
		while (i <= x)
		{
			j = 0;
			while (j <= y)
			{
				ft_putchar(choice(i, j, x, y));
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
