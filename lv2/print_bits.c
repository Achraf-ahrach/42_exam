/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <aahrach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:54:45 by aahrach           #+#    #+#             */
/*   Updated: 2023/02/01 14:44:56 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int i = 7;
    unsigned char p;
    while (i >= 0)
    {
        p = (octet >> i & 1) + 48;
        write (1, &p,1);
        i--;
    }
}

int main()
{
    print_bits(2);
}
