/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 16:18:31 by mdeville          #+#    #+#             */
/*   Updated: 2017/07/22 18:22:29 by atripard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "readstd.h"
#include "ft_list.h"

int		main(void)
{
	t_list	*list;
	char	*str;

	list = readstd();
	str = ft_list_to_str(list);
	printf("%s", str);
	return (0);
}
