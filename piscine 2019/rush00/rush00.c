/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocilie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 14:39:38 by ocilie            #+#    #+#             */
/*   Updated: 2019/11/02 14:44:16 by ocilie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		rush_one_by_one(void)
{
	ft_putchar('o');
	ft_putchar('\n');
}

void		rush_one_dim(int max_x, int max_y, int x, int y)
{
	while (x <= max_x && y <= max_y)
	{
		if ((x == 1 && y == 1) || (x == max_x && y == max_y))
		{
			ft_putchar('o');
			if (max_x == 1)
				y++;
			else if (max_y == 1)
				x++;
		}
		else if (max_x == 1 && (y > 1 && y < max_y))
		{
			ft_putchar('|');
			y++;
		}
		else
		{
			ft_putchar('-');
			x++;
		}
		if (max_x == 1)
			ft_putchar('\n');
	}
	if (max_y == 1)
		ft_putchar('\n');
}

void		rush_two_dim(int max_x, int max_y)
{
	int x;
	int y;

	y = 1;
	while (y <= max_y)
	{
		x = 1;
		while (x <= max_x)
		{
			if ((x == 1 && y == 1) || (x == max_x && y == max_y))
				ft_putchar('o');
			else if ((x == max_x && y == 1) || (y == max_y && x == 1))
				ft_putchar('o');
			else if ((y == 1 || y == max_y))
				ft_putchar('-');
			else if ((x == 1 || x == max_x))
				ft_putchar('|');
			else
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

void		rush(int max_x, int max_y)
{
	int x;
	int y;

	x = 1;
	y = 1;
	if (max_x >= 1 && max_y >= 1)
	{
		if (max_x == 1 && max_y == 1)
			rush_one_by_one();
		else if (max_x == 1 || max_y == 1)
			rush_one_dim(max_x, max_y, x, y);
		else
			rush_two_dim(max_x, max_y);
	}
}
