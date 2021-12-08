/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:44:32 by bdesmet           #+#    #+#             */
/*   Updated: 2019/11/14 12:31:27 by bdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int racine;

	racine = 1;
	if (nb <= 0)
		return (0);
	while (racine * racine < nb)
	{
		racine++;
		if (racine > 46340)
			return (0);
	}
	if (racine * racine == nb)
		return (racine);
	return (0);
}
