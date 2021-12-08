/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedesmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 14:23:57 by bedesmet          #+#    #+#             */
/*   Updated: 2021/09/18 14:23:59 by bedesmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <unistd.h>
# include <stdlib.h>

//  main
int		is_param_valid(int ac, char **av);
int		*convert_param_to_int(char *str);
int		solution(int input[16], int **result, int position);
void	print_result(int **result);

//  conditions
int		check_if_double_number(int height, int **result, int position);
int		check_up(int **result, int position, int input[16]);
int		check_right(int **result, int position, int input[16]);
int		check_down(int **result, int position, int input[16]);
int		check_left(int **result, int position, int input[16]);

//  make and check
int		check_pov(int input[16], int **result, int position);
int		**make_result_tab(void);

//  utility
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_mini_atoi(char *str);
int		ft_strlen(char *str);

#endif
