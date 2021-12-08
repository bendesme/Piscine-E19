/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedesmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 10:03:14 by bedesmet          #+#    #+#             */
/*   Updated: 2021/09/08 10:03:18 by bedesmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while (s1[c] && s2[c] && s1[c] == s2[c])
	{
		c++;
	}
	return (s1[c] - s2[c]);
}

// #include <bsd/string.h>
// #include <stdio.h>
// int main(void)
// {
// 	char str1[] = "Zwangere Guy";
// 	char str2[] = "Zwangere Woman";
// 	printf("%d\n", ft_strcmp(str1, str2));
// 	printf("%d\n", strcmp(str1, str2));
// 	return (0);
// }