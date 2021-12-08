/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 18:42:56 by bdesmet           #+#    #+#             */
/*   Updated: 2019/11/19 15:38:03 by bdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int			count(int size, char **strs, char *sep)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	j = 0;
	k = 0;
	while (sep[i])
		i++;
	l = i * (size - 1);
	while (j < size)
	{
		while (strs[j][k])
			k++;
		j++;
		l = l + k;
		k = 0;
	}
	return (l + 1);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		a;
	char	*create;

	j = 0;
	k = 0;
	a = 0;
	if (!(create = (char *)malloc(sizeof(char) * (count(size, strs, sep)))))
		return (0);
	while (size > k)
	{
		i = 0;
		while (strs[a][i])
			create[j++] = strs[a][i++];
		i = 0;
		while (size - 1 > k && sep[i])
			create[j++] = sep[i++];
		a++;
		k++;
	}
	create[j] = '\0';
	return (create);
}
