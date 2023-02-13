/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <aahrach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:20:14 by aahrach           #+#    #+#             */
/*   Updated: 2023/02/01 12:53:42 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	kalimat(char *str)
{
	int		i = 0;
	int		j = 0;

	while (str[i])
	{
		if (str[i] != ' ' && str[i] && str[i] != '\t' && str[i] != '\n')
		{
			while (str[i] != ' ' && str[i] && str[i] != '\t' && str[i] != '\n')
				i++;
			j++;
		}
		while ((str[i] == ' ' && str[i])|| (str[i] == '\t' && str[i]) || (str[i] == '\n' && str[i]))
			i++;
	}
	return (j);
}

char    **ft_split(char *str)
{
	int 	i = 0;
	int 	x = 0;
	int		j = 0;
	int		b = 0;
	int		tablo_big = 0;
	int		tablo_young = 0;
	char	**p;

	tablo_big = kalimat(str);
	p = malloc((tablo_big + 1) * sizeof(char *));
	while (str[i])
	{
		tablo_young = 0;
		while ((str[i] == ' ' && str[i]) || (str[i] == '\t' && str[i]) || (str[i] == '\n' && str[i]))
			i++;
		j = i;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
		{
			tablo_young++;
			i++;
		}
		p[x] = malloc(tablo_young + 1);
		b = 0;
		while (j < i)
		{
			p[x][b] = str[j];
			j++;
			b++;
		}
		p[x][tablo_young] = '\0';
		x++;
	}
	p[x] = NULL;
	return (p);
}
int main()
{
	char **p;
	int i = 0;
	p = ft_split("achraf\n   ahrach   \njjj			\t  \nhhh");
	while (p[i])
		printf("%s\n", p[i++]);
}