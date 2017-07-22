/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_useful.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylanglad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 15:40:53 by ylanglad          #+#    #+#             */
/*   Updated: 2017/07/22 16:07:46 by ylanglad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		ft_putchar(str[x]);
		x++;
	}
}

int		ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

int		ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while (s1[x] && s2[x] && s1[x] == s2[x])
		x++;
	if (s1[x] == '\0' && s2[x] == '\0')
		return (0);
	else
		return (s1[x] - s2[x]);
}
