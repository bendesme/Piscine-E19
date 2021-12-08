/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 13:03:22 by bdesmet           #+#    #+#             */
/*   Updated: 2019/11/11 18:36:50 by bdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int div;
	int mod;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
		if (nb == -2147483648)
		{
			write(1, "2147483648", 10);
			return ;
		}
	}
	mod = nb % 10;
	div = nb / 10;
	if (nb > 9)
		ft_putnbr(div);
	ft_putchar(mod + 48);
}
