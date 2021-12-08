/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedesmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 10:04:42 by bedesmet          #+#    #+#             */
/*   Updated: 2021/09/08 10:04:47 by bedesmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	c;
	int	b;

	c = 0;
	b = 0;
	while (dest[c])
		c++;
	while (src[b])
	{
		dest[c + b] = src[b];
		b++;
	}
	dest[b + c] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <bsd/string.h>
// int main()
// {
// 	char string[] = "Ich bin\0 LololoL";
// 	char string2[] = " eine sociss";
// 	printf("%s\n", ft_strcat(string, string2));
// 	char string0[] = "Ich bin\0 LololoL";
// 	printf("%s\n", strcat(string0, string2));
// 	return (0);
// }