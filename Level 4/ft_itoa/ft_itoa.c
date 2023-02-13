/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <aahrach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:34:28 by aahrach           #+#    #+#             */
/*   Updated: 2023/02/13 14:46:37 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_len(int nbr)
{
	int len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		len++;
		nbr *= -1;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int		len;
	char	*p;
	int i = 0;
	int j = 0;

	len = ft_len(nbr);
	p = malloc(len + 1);
	if (nbr < 0)
	{
		p[i] = '-';
		nbr *= -1;
		i++;
	}
	p[len--] = '\0';
	while (len >= i)
	{
		p[len--] = nbr % 10 + 48;
		nbr = nbr / 10;
	}
	return (p);
}
