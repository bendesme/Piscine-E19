/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedesmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:25:37 by bedesmet          #+#    #+#             */
/*   Updated: 2021/09/08 09:25:40 by bedesmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	c;
	int	swp;

	c = 0;
	while (c < size - 1)
	{
		if (tab[c + 1] < tab[c])
		{
			swp = tab[c + 1];
			tab[c + 1] = tab[c];
			tab[c] = swp;
			c = 0;
		}
		else
			c++;
	}
}

// #include <stdio.h>
// int main()
// {
// 	int tab[8] = {1, 3, 2, 5, 78, 12, 66, 4};
// 	ft_sort_int_tab(&tab[0], 8);
// 	for (int i = 0; i < 8; i++)
// 	{
// 		printf("%d ",tab[i]);
// 	}
// } 