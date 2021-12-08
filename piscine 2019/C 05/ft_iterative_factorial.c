/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 18:22:10 by bdesmet           #+#    #+#             */
/*   Updated: 2019/11/14 16:09:46 by bdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int r;
	int p;

	r = nb;
	if (nb == 0)
		return (1);
	while (0 > nb)
	{
		return (0);
	}
	p = 1;
	while (nb > p)
	{
		r = r * p;
		p++;
	}
	return (r);
}
