/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 11:34:47 by bdesmet           #+#    #+#             */
/*   Updated: 2019/11/14 12:28:37 by bdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_find_next_prime2(int nb)
{
	long racine;

	racine = 2;
	if (nb <= 1)
		return (0);
	while (racine * racine <= nb)
	{
		if ((nb % racine) == 0)
			return (0);
		racine++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (!(ft_find_next_prime2(nb)))
	{
		nb++;
	}
	return (nb);
}
