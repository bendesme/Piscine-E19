/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedesmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 10:05:52 by bedesmet          #+#    #+#             */
/*   Updated: 2021/09/08 10:05:55 by bedesmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	c;
	int	b;

	c = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[c])
	{
		if (str[c] == to_find[0])
		{
			b = 0;
			while (str[c + b] == to_find[b] && to_find[b])
			{
				b++;
				if (!to_find[b])
					return (&str[c]);
			}
		}
		c++;
	}
	return (0);
}

// #include <stdio.h>
// #include <bsd/string.h>
// int main()
// {
// 	char string[48] = "Zwangere Guy";
// 	char string2[] = " Is mooi";
// 	printf("%s\n", ft_strstr(string, string2));
// 	printf("%s\n", strstr(string, string2));
// 	return (0);
// }