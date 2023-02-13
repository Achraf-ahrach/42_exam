/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 10:41:12 by aahrach           #+#    #+#             */
/*   Updated: 2023/01/31 10:41:15 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	    is_power_of_2(unsigned int n)
{
	unsigned int p = 1;
	unsigned int l = 2;

	if (n == 0 || n == 2)
		return (0);
	while (p <= n)
	{
		l = p * p;
		if (l == n)
			return (1);
		p++;
	}
	return (0);
}
/*int main()
{
	printf("%d", is_power_of_2(1));
}*/
