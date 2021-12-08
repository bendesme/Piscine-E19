/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 15:54:51 by bdesmet           #+#    #+#             */
/*   Updated: 2019/11/14 12:22:10 by bdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int r;
	int i;

	r = 1;
	i = power;
	if (power < 0)
		return (0);
	if (power == 0 & nb == 0)
		return (1);
	while (i > 0)
	{
		r = r * nb;
		--i;
	}
	return (r);
}
