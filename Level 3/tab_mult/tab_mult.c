/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <aahrach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:05:19 by aahrach           #+#    #+#             */
/*   Updated: 2023/02/13 09:46:35 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int nbr = 0;
	int i = 0;

	while (str[i] <= '9' && str[i] >= '0')
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	return (nbr);
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		write (1, &"0123456789"[nbr], 1);
}

int main(int ac, char **av)
{
	int i = 1;
	int nbr = 0;
	int l = 0;

	if (ac == 2)
	{
		while (i < 10)
		{
			ft_putnbr(i);
			write (1, " ", 1);
			write (1, "x ", 2);
			nbr = ft_atoi(av[1]);
			ft_putnbr(nbr);
			write (1, " = ", 3);
			l = nbr * i;
			ft_putnbr(l);
			write (1, "\n", 1);
			i++;
		}
	}
	else
		write (1, "\n", 1);
}
