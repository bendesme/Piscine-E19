/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedesmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 10:04:06 by bedesmet          #+#    #+#             */
/*   Updated: 2021/09/08 10:04:08 by bedesmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (n > 0)
	{
		if (s1[c] != s2[c])
			return (s1[c] - s2[c]);
		if (s1[c] == '\0')
			return (0);
		c ++;
		n --;
	}
	return (0);
}

// #include <stdio.h>
// #include <bsd/string.h>
// int main(void)
// {
// 	char str1[] = "\0";
// 	char str2[] = "";
// 	printf("%d\n", ft_strncmp(str1, str2, 10));
// 	printf("%d\n", strncmp(str1, str2, 10));
// 	return (0);
// }