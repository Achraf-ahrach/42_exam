/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <aahrach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:13:37 by aahrach           #+#    #+#             */
/*   Updated: 2023/02/12 17:50:58 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_print(char	*p)
{
	int		i;
	int		j;
	char	*s;

	j = 0;
	while (p[i])
		i++;
	s = malloc(i + 1);
	i = 0;
	while (p[i] != ' ' && p[i])
		i++;
	if (p[i] == ' ')
		i++;
	while (p[i])
		s[j++] = p[i++];
	s[j] = ' ';
	j++;
	i = 0;
	while (p[i] != ' ' && p[i])
		s[j++] = p[i++];
	s[j] = '\0';
	return (s);
}

int main(int ac, char **av)
{
	int		i = 0;
	int		n = 0;
	int		j = 0;
	char	*p;
	char	*s;

	if (ac >= 2)
	{
		while ((av[1][i] && av[1][i] == ' ') || (av[1][i] == '\t' && av[1][i]))
			i++;
		j = i;
		while (av[1][i])
			i++;
		p = malloc((i + 1) * sizeof(char));
		while(av[1][j])
		{
			if ((av[1][j] == ' ') || (av[1][j] == '\t'))
			{
				while ((av[1][j] && av[1][j] == ' ') || (av[1][j] && av[1][j] == '\t'))
					j++;
				if (av[1][j] != '\0')
					p[n++] = ' ';
			}
			else
				p[n++] = av[1][j++];
		}
		p[n] = '\0';
		s = ft_print(p);
		j = 0;
		while (s[j])
			write (1, &s[j++], 1);
	}
	write (1, "\n", 1);
}
