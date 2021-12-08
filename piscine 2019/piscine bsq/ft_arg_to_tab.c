/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_to_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonaert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 14:05:25 by fbonaert          #+#    #+#             */
/*   Updated: 2019/11/20 14:02:22 by fbonaert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_itoa(int nbr);
int		ft_atoi(char *str);

char    *ft_fill_string(int i, char *str, int length)
{
	int k;
	char    *tab;

	k = 0;
	tab = (char *)malloc((length) * sizeof(char));
	while (k < length - 1)
	{
		tab[k] = str[i];
		k++;
		i++;
	}
	tab[k] = '\0';
	return (tab);
}

int		ft_get_length(char *str)
{
	int 	i;
	int 	j;
	char	*tab;

	i = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	i = i - 4;
	if (!(tab = (char *)malloc((i + 2) * sizeof(char))))
		return (0);
	j = 0;
	while (j <= i)
	{
		tab[j] = str[j];
		j++;
	}
	tab[j] = '\0';
	i = ft_atoi(tab);
	free(tab);
	return (i);
}

char	**ft_arg_to_tab(char *str)
{
	int 	i;
	char	**tab;
	int length;
	int j;
	int lines;

	i = 0;
	while (str[i] != '\n')
		i++;
	lines = ft_get_length(str);
	length = (ft_strlen(str) - lines - i) / lines;
	ft_putstr(ft_itoa(length));
	if (!(tab = (char **)malloc(lines * sizeof(char*))))
		return (0);
	i = 0;
	while (i < lines)
	{
		if (!(tab[i] = (char *)malloc(length * sizeof(char))))
			return (0);
		tab[i][0] = '\0';
		i++;
	}
	i = 0;
	while (str[i] != '\n')
		i++;
	i++;
	j = 0;
	length++;
	while (j < lines)
	{
		tab[j] = ft_fill_string(i, str, length);
		tab[j][length] = '\0';
		i = i + length;
		j++;
	}
	return (tab);
}
