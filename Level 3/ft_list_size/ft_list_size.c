/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 10:14:50 by aahrach           #+#    #+#             */
/*   Updated: 2023/01/31 10:49:01 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct    s_list
{
	int a;
	int b;
    struct s_list *next;
    void          *data;
}t_list;

int	ft_list_size(t_list *begin_list)
{
	if(!begin_list)
	   return (0);
	return (1 + ft_list_size(begin_list->next));
}
/////

#include <unistd.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *b)
{
	int size = 0;

	while (b)
	{
		size++;
		b = b->next;
	}
	return (size);
}
