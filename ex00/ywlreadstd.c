/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readstd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 12:53:27 by mdeville          #+#    #+#             */
/*   Updated: 2017/07/22 20:55:04 by ylanglad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_list.h"
#include "rush_core.h"

int		compare(char *input, int x, int y)
{
	int rush;

	rush = 0;
	while (rush <= 4)
	{
	if (ft_strcmp(input, rush_corr(x, y, rush)) == 0)
		return (rush/* ici, c'est bon  */);
	
	rush++;
	}	
	return (rush/* ici, c'est pas  bon (=5)  */);

}

t_list	*readstd(void)
{
	t_list	*begin;
	char c;

	begin = NULL;
	while (read(0, &c, 1) > 0)
	{
		ft_list_push_front(&begin, c);
	}
	return (begin);
}
