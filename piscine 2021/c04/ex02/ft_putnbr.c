/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedesmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 10:38:46 by bedesmet          #+#    #+#             */
/*   Updated: 2021/09/14 10:38:48 by bedesmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char nb)
{
	write(1, &nb, 1);
}

void	ft_putnbr(int nb)
{
	int				division;
	int				modulo;
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = (unsigned int)(nb * -1);
	}
	else
		nbr = (unsigned int)nb;
	division = nbr / 10;
	modulo = nbr % 10;
	if (division != 0)
	{
		ft_putnbr(division);
	}
	ft_putchar(modulo + 48);
}

// int	main(void)
// {
// 	ft_putnbr(-2147483648);
// }