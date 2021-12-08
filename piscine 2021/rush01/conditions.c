/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedesmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 19:55:03 by bedesmet          #+#    #+#             */
/*   Updated: 2021/09/18 19:55:06 by bedesmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

// when a function returns 0 = fail
// when a function returns 1 = succes
int	check_if_double_number(int height, int **result, int position)
{
	int	c;

	c = 0;
	while (c < position / 4)
	{
		if (result[c][position % 4] == height)
			return (0);
		c++;
	}
	c = 0;
	while (c < position % 4)
	{
		if (result[position / 4][c] == height)
			return (0);
		c++;
	}
	return (1);
}

int	check_up(int **result, int position, int input[16])
{
	int	c;
	int	max_height;
	int	visible_boxes;

	c = 0;
	max_height = 0;
	visible_boxes = 0;
	if (position / 4 == 3)
	{
		while (c < 4)
		{
			if (result[c][position % 4] > max_height)
			{
				max_height = result[c][position % 4];
				visible_boxes++;
			}
			c++;
		}
		if (input[position % 4] != visible_boxes)
			return (0);
	}
	return (1);
}

int	check_right(int **result, int position, int input[16])
{
	int	c;
	int	max_height;
	int	visible_boxes;

	c = 3;
	max_height = 0;
	visible_boxes = 0;
	if (position % 4 == 3)
	{
		while (c >= 0)
		{
			if (result[position / 4][c] > max_height)
			{
				max_height = result[position / 4][c];
				visible_boxes++;
			}
			c--;
		}
		if (input[4 + position / 4] != visible_boxes)
			return (0);
	}
	return (1);
}

int	check_down(int **result, int position, int input[16])
{
	int	c;
	int	max_height;
	int	visible_boxes;

	c = 3;
	max_height = 0;
	visible_boxes = 0;
	if (position / 4 == 3)
	{
		while (c >= 0)
		{
			if (result[c][position % 4] > max_height)
			{
				max_height = result[c][position % 4];
				visible_boxes++;
			}
			c--;
		}
		if (input[12 + position % 4] != visible_boxes)
			return (0);
	}
	return (1);
}

int	check_left(int **result, int position, int input[16])
{
	int	c;
	int	max_height;
	int	visible_boxes;

	c = 0;
	max_height = 0;
	visible_boxes = 0;
	if (position % 4 == 3)
	{
		while (c < 4)
		{
			if (result[position / 4][c] > max_height)
			{
				max_height = result[position / 4][c];
				visible_boxes++;
			}
			c++;
		}
		if (input[8 + position / 4] != visible_boxes)
			return (0);
	}
	return (1);
}
