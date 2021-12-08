/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedesmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 12:31:00 by bedesmet          #+#    #+#             */
/*   Updated: 2021/09/11 12:31:02 by bedesmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_haut(int max_x, int max_y)
{
	int	x;

	ft_putchar('o');
	x = 2;
	while (x < max_x)
	{
		ft_putchar('-');
		x++;
	}
	if (max_x == x)
		ft_putchar('o');
	ft_putchar('\n');
}

void	ft_bas(int max_x, int max_y)
{
	int	x;

	ft_putchar('o');
	x = 2;
	while (x < max_x)
	{
		ft_putchar('-');
		x++;
	}
	if (max_x == x)
		ft_putchar('o');
	ft_putchar('\n');
}

void	ft_milieu(int max_x, int max_y)
{
	int	x;

	ft_putchar('|');
	x = 2;
	while (x < max_x)
	{
		ft_putchar(' ');
		x++;
	}
	if (x == max_x)
		ft_putchar('|');
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
			if (y == 1)
				ft_haut(max_x, max_y);
			if (y < max_y && y > 1)
				ft_milieu(max_x, max_y);
			if (y == max_y)
				ft_bas(max_x, max_y);
			y++;
		}		
	}
}
