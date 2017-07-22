/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 16:18:31 by mdeville          #+#    #+#             */
/*   Updated: 2017/07/22 19:17:13 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "readstd.h"
#include "ft_list.h"
#include "rush_core.h"

int		main(void)
{
	t_list	*list;
	char	*str;

	list = readstd();
	str = ft_list_to_str(list);
	printf("%s", rush_core(5, 5, 0));
	return (0);
}
