* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 21:09:26 by bdesmet           #+#    #+#             */
/*   Updated: 2019/11/11 12:33:29 by bdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int b;

	i = 0;
	if (!to_find || !str)
		return (0);
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			b = 0;
			while (str[i + b] == to_find[b] && to_find[b])
			{
				b++;
				if (to_find[b] == '\0')
					return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
