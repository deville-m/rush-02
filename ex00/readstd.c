/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readstd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 12:53:27 by mdeville          #+#    #+#             */
/*   Updated: 2017/07/22 16:02:43 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_list.h"

char *t_listtoa(const t_list *begin)
{
	
}

t_list	**readstd(void)
{
	t_list	**begin;
	char c;

	while (read(1, &c, 1) > 0)
	{
		ft_list_push_front(begin, c);
	}
	return (begin);
}
