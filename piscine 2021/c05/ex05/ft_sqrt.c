/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedesmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:29:39 by bedesmet          #+#    #+#             */
/*   Updated: 2021/09/14 11:29:40 by bedesmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb <= 0)
		return (0);
	while (sqrt * sqrt < nb)
	{
		sqrt++;
		if (sqrt > 46340)
			return (0);
	}
	if (sqrt * sqrt == nb)
		return (sqrt);
	return (0);
}

// #include <stdio.h>
//int	main(void)
//{
//	unsigned int check = 2147483647;
//	while(check <= 2147483647)
//	{
//		int sqrt = ft_sqrt(check);
//		printf("%d : %d\n", check, sqrt);
//		check++;
//	}
//}