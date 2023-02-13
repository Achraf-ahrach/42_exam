/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 08:04:16 by aahrach           #+#    #+#             */
/*   Updated: 2022/12/20 10:48:56 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check(char c, char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int check_b(char c, char *str, int x)
{
	int i = 0;

	while (i < x)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main(int ac, char **av)
{
	int i = 0;
	int x;

	if (ac == 3)
	{
		while (av[1][i])
		{
			if (check(av[1][i], av[2]) && !check_b(av[1][i], av[1], i))
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
