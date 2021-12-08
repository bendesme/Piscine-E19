/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedesmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 10:07:26 by bedesmet          #+#    #+#             */
/*   Updated: 2021/09/08 10:07:29 by bedesmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		c++;
	}
	return (c);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	b;
	unsigned int	c;

	i = ft_strlen(dest);
	c = ft_strlen(src);
	if (size <= i)
		return (size + c);
	if (!size)
		return (c);
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

// #include <bsd/string.h>
// #include <stdio.h>
// int	main()
// {
// 	char string[] = "Ich bin\0 lololol";
// 	char string2[] = " eine sociss";
// 	printf("%d\n",ft_strlcat(string, string2, 1));
// 	printf("%s\n", string);
// 	char string0[] = "Ich bin\0 lololol";
// 	printf("%zu\n",strlcat(string0, string2, 1));
// 	printf("%s\n", string0);
// 	return (0);
// }