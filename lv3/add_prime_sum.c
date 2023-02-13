/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:24:28 by aahrach           #+#    #+#             */
/*   Updated: 2022/12/21 09:17:00 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
	int nbr = 0;
	int i = 0;

	while (str[i])
	{
		nbr = nbr * 10 + str[i] - 48;
		i++;
	}
	return (nbr);
}

int prime(int x)
{
	int i = 2;

	while (i <= x / i)
	{
		if (x % i == 0)
			return(0);
		i++;
	}
	return (1);
}

void ft_putnbr(int nbr)
{
	if (nbr <= 9)
		write(1, &"0123456789"[nbr],1);
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

int main(int ac , char **av)
{
	int i = 2;
	int nbr = 0;
	int som = 0;

	if (ac == 2)
	{
		nbr = ft_atoi(av[1]);
		if (nbr == 2)
		{
			write (1, "2\n",2);
			exit (0);
		}
		while (i <= nbr)
		{
			if (prime(i))
				som += i;
			i++;
		}
		ft_putnbr(som);
		write(1, "\n",1);
	}
	else
		write(1, "0\n", 2);
}
