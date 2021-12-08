/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 17:31:24 by bdesmet           #+#    #+#             */
/*   Updated: 2019/11/12 17:41:28 by bdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_checkbase(char *base)
{
	int i;
	int j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
		if (base[i] == '+' || base[i] == '-')
			return (0);
		else
			i++;
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base2(long int nbr, char *base)
{
	char	tab[32];
	int		l;
	int		i;

	l = 0;
	i = 0;
	while (base[l])
		l++;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * (-1);
	}
	while (nbr >= l)
	{
		tab[i] = base[nbr % l];
		nbr = nbr / l;
		i++;
	}
	tab[i] = base[nbr % l];
	tab[i + 1] = '\0';
	i++;
	while (i-- > 0)
		ft_putchar(tab[i]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_checkbase(base) == 0)
		return ;
	ft_putnbr_base2(nbr, base);
}
