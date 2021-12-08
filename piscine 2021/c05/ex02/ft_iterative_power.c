/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedesmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:28:46 by bedesmet          #+#    #+#             */
/*   Updated: 2021/09/14 11:28:48 by bedesmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	r;
	int	c;

	c = 0;
	r = 1;
	if (power < 0)
		return (0);
	while (c < power)
	{
		r = r * nb;
		c++;
	}
	return (r);
}

// #include <stdio.h>
//int main(void)
//{
//	printf("%d\n", ft_iterative_power(6, 2));
//}