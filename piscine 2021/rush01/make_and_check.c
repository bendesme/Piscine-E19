/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedesmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:02:38 by bedesmet          #+#    #+#             */
/*   Updated: 2021/09/19 17:02:41 by bedesmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	**make_result_tab(void)
{
	int	**result;
	int	c;
	int	i;

	i = 0;
	result = malloc(sizeof(int) * 16);
	if (!result)
		return (0);
	c = 0;
	while (c < 4)
	{
		result[c] = malloc(sizeof(int) * 4);
		if (!result[c])
			return (0);
		while (i < 4)
		{
			result[c][i] = 0;
			i++;
		}
		c++;
	}
	return (result);
}

// when a function returns 0 = fail
// when a function returns 1 = succes
int	check_pov(int input[16], int **result, int position)
{
	if (check_left(result, position, input) == 0)
		return (0);
	if (check_right(result, position, input) == 0)
		return (0);
	if (check_down(result, position, input) == 0)
		return (0);
	if (check_up(result, position, input) == 0)
		return (0);
	return (1);
}
