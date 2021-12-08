/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonaert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 13:58:10 by fbonaert          #+#    #+#             */
/*   Updated: 2019/11/20 13:57:50 by fbonaert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_read(char *filepath);
void	ft_putstr(char *str);
char	**ft_arg_to_tab(char *str);
int		ft_get_length(char *str);
int		ft_algo(char **tab, char *str, int length);
char	*ft_itoa(int nbr);

int		main(int argc, char **argv)
{
	char	*str;
	char	**tab;
	int i;
	int length;

	str = ft_read(argv[1]);
	length = ft_get_length(str);
	ft_putstr(ft_itoa(length));
	tab = ft_arg_to_tab(str);
	i = 0;
	while (i < ft_get_length(str))
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
	i = ft_algo(tab, str, length);
	printf("%d", i);
	return (0);
}
