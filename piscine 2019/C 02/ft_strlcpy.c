/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 21:02:40 by bdesmet           #+#    #+#             */
/*   Updated: 2019/11/06 15:34:30 by bdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int a;
	unsigned int b;

	a = 0;
	b = 0;
	while (src[b] != '\0')
		b++;
	if (size == 0)
		return (b);
	while (a + 1 < size && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	a = 0;
	while (src[a] != '\0')
		a++;
	return (b);
}
