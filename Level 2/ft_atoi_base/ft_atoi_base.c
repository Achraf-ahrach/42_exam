/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <aahrach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 21:09:38 by aahrach           #+#    #+#             */
/*   Updated: 2023/02/11 12:56:46 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int result = 0;
	int	niga = 1;
	
	if (str[0] == -1)
	{
		i++;
		niga = -1;
	}
	while (str[i])
	{
		result *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			result += str[i] - '0';
		else if (str[i] >= 'A' && str[i] <= 'Z')
			result += str[i] - '7';
		else if (str[i] >= 'a' && str[i] <= 'z')
			result += str[i] - 'W';
		i++;
	}
	return (result * niga);
}
