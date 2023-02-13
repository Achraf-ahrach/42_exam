/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <aahrach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:05:41 by aahrach           #+#    #+#             */
/*   Updated: 2023/01/25 12:39:16 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int fprime(int n)
{
	int i;

	if(!n)
		return(0);
	i = 2;
	while(i < n)
	{
		if(n % i == 0)
			return(0);
		i++;
	}
	return(1);
}

int main(int a, char **v)
{
	int i;
	int n;

	i = 2;
	if(a == 2)
	{
		n = atoi(v[1]);
		if(fprime(n))
			printf("%d", n);
		else
		{
			while(n / i)
			{
				if(fprime(i))
				{
					while(n % i == 0)
					{
						printf("%d*", i);
						n = n / i;
						if(n / i)
							printf("*");
					}	
				}
				i++;
			}
		}
	}
	printf("\n");
}