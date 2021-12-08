/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedesmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:12:07 by bedesmet          #+#    #+#             */
/*   Updated: 2021/09/08 09:12:11 by bedesmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	int	i;

	i = 0;
	if (n < i)
	{
		write(1, "N", 1);
	}
	else if (n >= i)
	{
		write(1, "P", 1);
	}
}

//int	main(void)
//{
//	ft_is_negative(3);
//	ft_is_negative(0);
//	ft_is_negative(-3);
//}