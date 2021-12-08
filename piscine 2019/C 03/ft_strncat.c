/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 21:02:34 by bdesmet           #+#    #+#             */
/*   Updated: 2019/11/10 12:35:35 by bdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int b;
	unsigned int i;

	b = 0;
	while (dest[b])
	{
		b++;
	}
	i = 0;
	while ((i < nb) && src[i])
	{
		dest[b] = src[i];
		i++;
		b++;
	}
	dest[b] = '\0';
	return (dest);
}
