/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedesmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 10:39:17 by bedesmet          #+#    #+#             */
/*   Updated: 2021/09/14 10:39:19 by bedesmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		c++;
	}
	return (c);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_checkbase(char *base)
{
	int	c;
	int	i;

	c = 0;
	while (base[c])
	{
		i = c + 1;
		while (base[i])
		{
			if (base[c] == base[i])
				return (0);
			i++;
		}
		if (base[c] == '+' || base[c] == '-')
			return (0);
		c++;
	}
	if (c <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base2(long int nbr, char *base)
{
	unsigned int	size;
	unsigned int	c;

	size = ft_strlen(base);
	c = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		c = nbr * -1;
	}
	else
		c = nbr;
	if (c < size)
		ft_putchar(base[c]);
	else
	{
		ft_putnbr_base2(c / size, base);
		ft_putnbr_base2(c % size, base);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_checkbase(base))
		ft_putnbr_base2(nbr, base);
}

int main (void)
{
	ft_putnbr_base(-123456, "alo");
		return (0);
}