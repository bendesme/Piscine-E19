/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 19:27:57 by bdesmet           #+#    #+#             */
/*   Updated: 2019/11/02 20:31:57 by bdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char nb)
{
	write(1, &nb, 1);
}

void	ft_putnbr(int nb)
{
	int division;
	int modulo;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	division = nb / 10;
	modulo = nb % 10;
	if (division != 0)
	{
		ft_putnbr(division);
	}
	ft_putchar(modulo + 48);
}
