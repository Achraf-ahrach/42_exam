/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:07:24 by aahrach           #+#    #+#             */
/*   Updated: 2023/01/07 11:11:15 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*int jbed_chhal(int i)
{
	int l = 1;

	while (i > 9)
	{
		i /= 10;
		l *= 10;
	}
	return (l);
}

int main(int ac, char **av)
{
	int i;
	int l;

	i = 0;
	ac--;
	if (ac >= 1 && ac <= 9)
		write (1, &"0123456789"[ac], 1);
	else
	{
		
		l = jbed_chhal(ac);
		while (l > 0)
		{
			i = ac / l;
			ac = ac % l;
			l /= 10;
			write (1, &"0123456789"[i], 1);
	
		}
	}
	write (1, "\n", 1);
}*/
void	ft_putnbr(int ac)
{
	if (ac < 10)
		write (1 , &"0123456789"[ac], 1);
	else
	{
		ft_putnbr(ac / 10);
		ft_putnbr(ac % 10);
	}
}
int main(int ac, char **av)
{
	ft_putnbr(ac-1);
}
