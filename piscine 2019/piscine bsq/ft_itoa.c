/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 18:35:01 by exam              #+#    #+#             */
/*   Updated: 2019/11/20 13:59:20 by fbonaert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int count;
	char *str;
	int nb;
	int nb2;

	count = 1;
	nb2 = nbr;
	if (nbr == -2147483648)
	{
		str = malloc(12 * sizeof(char));
		str[0] = '-';
		str[1] = '2';
		str[2] = '1';
		str[3] = '4';
		str[4] = '7';
		str[5] = '4';
		str[6] = '8';
		str[7] = '3';
		str[8] = '6';
		str[9] = '4';
		str[10] = '8';
		str[11] = '\0';
	}
	else
	{
		if (nbr < 0)
		{
			count++;
			nb = nbr * (-1);
			nbr = nbr * (-1);
		}
		else
		{
			nb = nbr;
		}
		while (nb > 9)
		{
			nb = nb / 10;
			count++;
		}
		str = malloc((count + 1) * sizeof(char));
		str[count] = '\0';
		count--;
		while(count >= 0)
		{
			str[count] = (nbr % 10) + '0';
			nbr = nbr / 10;
			count--;
		}
		if (nb2 < 0)
			str[0] = '-';
	}
	return (str);
}
