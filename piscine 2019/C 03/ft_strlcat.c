/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 13:35:50 by bdesmet           #+#    #+#             */
/*   Updated: 2019/11/07 20:15:36 by bdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int b;
	unsigned int c;

	i = 0;
	while (dest[i])
		i++;
	c = 0;
	while (src[c])
		c++;
	if (size <= i)
		c = c + size;
	else
		c = c + i;
	b = 0;
	while (src[b] && i + 1 < size)
	{
		dest[i] = src[b];
		i++;
		b++;
	}
	dest[i] = '\0';
	return (c);
}
