/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedesmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 10:35:03 by bedesmet          #+#    #+#             */
/*   Updated: 2021/09/14 10:35:05 by bedesmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_rev_int_tab(int *tab, int size)
{
	int	swp;
	int	c;

	c = 0;
	while (c < size / 2)
	{
		swp = tab[c];
		tab[c] = tab[size - 1 - c];
		tab[size - 1 - c] = swp;
		c++;
	}
	return (*tab);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	tab[] = {5,6,8,4,3,0,7};
// 	int	i = 0;
// 	while (i < 7)
// 	{
// 		printf("%d, ", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	ft_rev_int_tab(tab, 7);
// 	i = 0;
// 	while (i < 7)
// 	{
// 		printf("%d, ", tab[i]);
// 		i++;
// 	}
// 	return (0);
// }