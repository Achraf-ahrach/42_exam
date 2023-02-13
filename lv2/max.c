/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <aahrach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 11:38:14 by aahrach           #+#    #+#             */
/*   Updated: 2023/02/12 12:30:18 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
	int max;
	int i = 0;
	if (!tab)
		return (0);
	max = tab[i];
	while (len > 0)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
		len--;
	}
	return (max);
}
