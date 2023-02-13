/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:44:16 by aahrach           #+#    #+#             */
/*   Updated: 2023/02/13 21:44:19 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*tmp;
	int		sw;

	tmp = lst;
	while (lst->next)
	{
		if (!(*cmp)(lst->data, lst->next->data))
		{
			sw = lst->data;
			lst->data = lst->next->data;
			lst->next->data = sw;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}
