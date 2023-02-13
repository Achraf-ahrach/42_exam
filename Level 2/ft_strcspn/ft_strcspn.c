/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpn.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 09:29:59 by aahrach           #+#    #+#             */
/*   Updated: 2022/12/21 10:10:24 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j = 0;
	int x = 0;

	while (s[i])
	{
		x = 0;
		if (s[i] != reject[x])
			{
				i++;
				x++;
				j++;
			}
		else
			return (j);
	}
	return (j);
}
/*
int main()
{
	printf("%zu",strcspn("test","es"));
	printf("\ndyali: %zu",ft_strcspn("test","es"));

}*/
