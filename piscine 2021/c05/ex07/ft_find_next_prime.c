/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedesmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:30:17 by bedesmet          #+#    #+#             */
/*   Updated: 2021/09/14 11:30:19 by bedesmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)
{
	int	c;

	c = 2;
	if (nb <= 1)
		return (0);
	while (c <= nb / c)
	{
		if (nb % c == 0)
			return (0);
		c++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!(is_prime(nb)))
		nb++;
	return (nb);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_find_next_prime(230));
// }