/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonaert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 19:19:23 by fbonaert          #+#    #+#             */
/*   Updated: 2019/11/20 16:50:00 by fbonaert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_itoa(int nbr);


char    ft_empty(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
		i++;
	i = i - 3;
	return (str[i]);
}

char    ft_full(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
		i++;
	i = i - 2;
	return (str[i]);
}

char    ft_fill(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
		i++;
	i--;
	return (str[i]);
}

int    ft_FBS(char **tab, int i, int j, char *str)
{
	int k;
	int l;
	int m;
	int n;
	int check;
	char full;

	full = ft_full(str);
	k = 0;
	check = 1;
	l = 0;
	n = j;
	while (check == 1)
	{
		m = i;
		l++;
		while (m < (i + l) && check == 1 && tab[m])
		{
			n = j;
			if (!tab[m][n])
				check = 0;
			while(n < (j + l) && check == 1)
			{
				if (tab[m][n] == full || tab[m][n] != '.')
				{
					check = 0;
				}
				n++;
			}
			m++;
		}
		k++;
		ft_putstr(ft_itoa(k));
	}
	return (k - 1);
}

int		ft_algo(char **tab, char *str, int length)
{
	int i;
	int j;
	int x;
	int y;
	int max;

	i = 0;
	max = 0;
	write(1, "\n", 1);
	while (i < length)
	{
		j = 0;
		while (tab[i][j])
		{
			ft_putchar(tab[i][j]);
			if (tab[i][j] && tab[i][j] != ft_full(str))
			{
				if (ft_FBS(tab, i, j, str) > max)
				{
					max = ft_FBS(tab, i, j, str);
					x = i;
					y = j;
				}
			}
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (max);
}
