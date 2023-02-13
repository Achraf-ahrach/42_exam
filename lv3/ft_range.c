/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <aahrach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:01:42 by aahrach           #+#    #+#             */
/*   Updated: 2023/02/08 19:23:24 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int *p;
	int i;

	i = 0;
	if (start >= end)
	{
		p = malloc((start - end + 1) * sizeof(int));
		while (start >= end)
			p[i++] = start--; 
	}
	else
	{
		p = malloc((end - start + 1) * sizeof(int));
		while (start <= end)
			p[i++] = start++; 
	}
	return (p);
}