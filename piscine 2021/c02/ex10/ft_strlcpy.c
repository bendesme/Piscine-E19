/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedesmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:46:09 by bedesmet          #+#    #+#             */
/*   Updated: 2021/09/08 09:46:12 by bedesmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	i = 0;
	while (src[i])
		i++;
	if (size == 0)
		return (i);
	while (c + 1 < size && src[c])
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (i);
}

// #include <stdio.h>
// int main(void)
// {
// 	char dest[15];
// 	char orig[] = "Izuna madara";
// 	printf("%u\n", ft_strlcpy(dest, orig, 13));
// 	printf("%s\n", dest);
// 	return (0);
// }