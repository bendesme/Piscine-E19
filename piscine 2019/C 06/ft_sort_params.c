/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 20:19:47 by bdesmet           #+#    #+#             */
/*   Updated: 2019/11/14 20:35:39 by bdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (!(s1) && !(s2))
		return (0);
	if (!(s1))
		return (s2[i]);
	if (!(s2))
		return (s1[i]);
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_params(int argc, char **tab)
{
	int		i;
	int		a;
	char	*tmp;

	i = 1;
	while (i < argc - 1)
	{
		a = i + 1;
		while (a < argc)
		{
			if (ft_strcmp(tab[a], tab[i]) < 0)
			{
				tmp = tab[a];
				tab[a] = tab[i];
				tab[i] = tmp;
			}
			a++;
		}
		i++;
	}
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	ft_sort_params(argc, argv);
	i = 1;
	(void)argc;
	while (argv[i])
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}
