/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:06:24 by aahrach           #+#    #+#             */
/*   Updated: 2022/12/20 15:25:12 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;

	if (ac == 4)
	{
		i = atoi(av[1]);
		j = atoi(av[3]);
		if (av[2][0] == '-')
			printf("%d",i-j);
		else if (av[2][0] == '+')
			printf("%d",i+j);
		else if (av[2][0] == '/')
			printf("%d",i/j);
		else if (av[2][0] == '*')
			printf("%d",i*j);
		else if (av[2][0] == '%')
			printf("%d",i%j);
	}
	printf("\n");
}
