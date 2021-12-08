/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedesmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 12:52:23 by bedesmet          #+#    #+#             */
/*   Updated: 2021/09/11 12:52:26 by bedesmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_haut_bas(int max_x, int max_y)
{
	int	x;

	ft_putchar('A');
	x = 2;
	while (x < max_x)
	{
		ft_putchar('B');
		x++;
	}
	if (max_x == x)
		ft_putchar('C');
	ft_putchar('\n');
}

void	ft_milieu(int max_x, int max_y)
{
	int	x;

	ft_putchar('B');
	x = 2;
	while (x < max_x)
	{
		ft_putchar(' ');
		x++;
	}
	if (x == max_x)
		ft_putchar('B');
	ft_putchar('\n');
}

void	rush(int max_x, int max_y)
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	if (max_x >= 1 && max_y >= 1)
	{
		while (y <= max_y)
		{
			if (y == 1 || y == max_y)
				ft_haut_bas(max_x, max_y);
			if (y < max_y && y > 1)
				ft_milieu(max_x, max_y);
			y++;
		}		
	}
}
