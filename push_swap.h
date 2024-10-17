/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 19:51:55 by ysuliman          #+#    #+#             */
/*   Updated: 2024/10/17 13:46:12 by ysuliman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void	arg_error(void);
int		countspaces(const char *str);
bool	ft_check_sort(long *a);
void	ft_sort(long *a, long *b);
void	sort_big_stack(long *a, long *b, int a_len);
int		ft_intlen(long *array);
int		ft_check_duplicate(long *stack, int len);
long	ft_atol(const char *str);
int		ft_isdigit_str(char *str);
void	sa(long *a);
void	sb(long *b);
void	ss(long *a, long *b);
void	pa(long *a, long *b);
void	pb(long *a, long *b);
void	ra(long *a);
void	rb(long *b);
void	rr(long *a, long *b);
void	rra(long *a);
void	rrb(long *b);
void	rrr(long *a, long *b);

#endif