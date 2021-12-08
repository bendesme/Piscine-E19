/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 10:08:37 by bdesmet           #+#    #+#             */
/*   Updated: 2019/11/02 15:28:23 by bdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char y;
	char x;
	char z;

	x = '0';
	{
		while (x <= '7')
		{
			y = x + 1;
			while (y <= '8')
			{
				z = y + 1;
				while (z <= '9')
				{
					ft_putchar(x, y, z);
					z++;
				}
				y++;
			}
			x++;
		}
	}
}
