/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atripard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 15:59:34 by atripard          #+#    #+#             */
/*   Updated: 2017/07/22 15:59:41 by atripard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	char			c;
}					t_list;

t_list		*ft_create_elem(char c)
{
	t_list		*elem;

	elem = (t_list*)malloc(sizeof(t_list));
	if (elem)
	{
		elem->next = NULL;
		elem->c = c;
	}
	return (elem);
}

void	ft_list_push_front(t_list **begin_list, char c)
{
	t_list	*new;

	new = ft_create_elem(c);
	new->next = *begin_list;
	*begin_list = new;
}

int		ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int		size;

	list = begin_list;
	size = 0;
	while (list)
	{
		list = list->next;
		size++;
	}
	return (size);
}
