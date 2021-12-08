/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedesmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:44:24 by bedesmet          #+#    #+#             */
/*   Updated: 2021/09/08 09:44:31 by bedesmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		return (1);
	if (a >= '0' && a <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (is_alpha(str[c]))
		{
			if (str[c] >= 'a' && str[c] <= 'z')
				str[c] = str[c] - 32;
			c++;
			while (is_alpha(str[c]))
			{
				if (str[c] >= 'A' && str[c] <= 'Z')
					str[c] = str[c] + 32;
				c++;
			}
		}
		c++;
	}
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char string[] = "icH bin EINE GroOse kampioen +5541¨¨s";
// 	printf("%s\n", ft_strcapitalize(string));
// 	return (0);
// }