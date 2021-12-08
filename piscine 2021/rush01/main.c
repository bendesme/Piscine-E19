/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedesmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 14:24:12 by bedesmet          #+#    #+#             */
/*   Updated: 2021/09/18 14:24:14 by bedesmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 		exemple :
// 		>./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
// 		1 2 3 4$
// 		2 3 4 1$
// 		3 4 1 2$
// 		4 1 2 3$

// 		4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2 

// 		4 3 2 1 = Up -> result[0-3]
// 		1 2 2 2 = right -> result[4-7]
// 		4 3 2 1 = left -> result[8-11]
// 		1 2 2 2 = down -> result[12-15]

#include "rush.h"

int	is_param_valid(int ac, char **av)
{
	int	c;

	c = 0;
	while (c < 31)
	{
		if (c % 2 == 0 && av[1][c] >= '1' && av[1][c] <= '4' && ac == 2)
			c++;
		else if (c % 2 == 1 && av[1][c] == ' ' && ac == 2)
			c++;
		else
		{
			ft_putstr("Error\n");
			return (0);
		}
	}
	return (1);
}

int	*convert_param_to_int(char *str)
{
	int	c;
	int	k;
	int	*newstr;

	c = 0;
	k = 0;
	newstr = malloc(sizeof(int) * 16);
	if (!newstr)
		return (0);
	while (str[c])
	{
		if (str[c] >= '0' && str[c] <= '9')
		{
			newstr[k] = ft_mini_atoi(str + c);
			k++;
		}
		c++;
	}
	return (newstr);
}

int	solution(int input[16], int **result, int position)
{
	int	size_of_box;

	if (position == 16)
		return (1);
	size_of_box = 1;
	while (size_of_box <= 4)
	{
		if (check_if_double_number(size_of_box, result, position) == 1)
		{
			result[position / 4][position % 4] = size_of_box;
			if (check_pov(input, result, position) == 1)
			{
				if (solution(input, result, position + 1) == 1)
					return (1);
			}
			else
				result[position / 4][position % 4] = 0;
		}
		size_of_box++;
	}
	return (0);
}

void	print_result(int **result)
{
	int	c;
	int	i;

	c = 0;
	while (c < 4)
	{
		i = 0;
		while (i < 4)
		{
			ft_putnbr(result[c][i]);
			ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		c++;
	}
}

// when a function returns 0 = fail
// when a function returns 1 = succes
int	main(int argc, char **argv)
{
	int	*input;
	int	**result;

	result = make_result_tab();
	if (is_param_valid(argc, argv) == 0)
		return (0);
	input = convert_param_to_int(argv[1]);
	if (solution(input, result, 0) == 1)
		print_result(result);
	else
		ft_putstr("Error\n");
	return (0);
}
