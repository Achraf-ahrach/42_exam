/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <aahrach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:35:12 by aahrach           #+#    #+#             */
/*   Updated: 2023/02/08 10:07:16 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int n = 0;
	int i = 0;

	while (str[i])
	{
		n = n * 10;
		n = n + (str[i] - 48);
		i++;
	}
	return (n);
}

void	print_hex(int n)
{
	char *str = "0123456789abcdef";
	if (n >= 16)
		print_hex(n / 16);
	write (1, &str[n % 16], 1);
}
int main(int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write (1, "\n", 1);
}

