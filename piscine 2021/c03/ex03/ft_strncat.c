/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedesmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 10:05:18 by bedesmet          #+#    #+#             */
/*   Updated: 2021/09/08 10:05:20 by bedesmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	unsigned int	b;

	c = 0;
	while (dest[c])
		c++;
	b = 0;
	while ((nb != 0) && src[b])
	{
		dest[c + b] = src[b];
		b++;
		nb--;
	}
	dest[c + b] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <bsd/string.h>
// int main()
// {
// 	char string[] = "ich bin\0 lolol";
// 	char string2[] = " eine sociss";
// 	printf("%s\n", ft_strncat(string, string2, 13));
// 	char string0[] = "ich bin\0 lolol";
// 	printf("%s\n", strncat(string0, string2, 13));
// 	return (0);
// }