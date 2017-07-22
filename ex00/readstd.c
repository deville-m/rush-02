/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readstd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 12:53:27 by mdeville          #+#    #+#             */
/*   Updated: 2017/07/22 17:22:56 by atripard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_list.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

t_list	*readstd(void)
{
	t_list	*begin;
	char c;

	begin = NULL;
	while (read(0, &c, 1) > 0)
	{
		ft_list_push_front(&begin, c);
		ft_putchar(begin->c);
	}
	return (begin);
}
