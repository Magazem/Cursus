/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:28:08 by ysuliman          #+#    #+#             */
/*   Updated: 2024/10/17 13:47:27 by ysuliman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(long *a)
{
	if (a[2] > a[1] && a[1] > a[0])
	{
		sa(a);
		rra(a);
	}
	else if (a[2] > a[1] && a[1] < a[0] && a[2] > a[0])
		ra(a);
	else if (a[2] > a[1] && a[1] < a[0] && a[2] < a[0])
		sa(a);
	else if (a[2] > a[1] && a[1] < a[0] && a[2] < a[0])
	{
		sa(a);
		ra(a);
	}
	else if (a[2] < a[1] && a[1] > a[0] && a[2] > a[0])
		rra(a);
}

void	sort_small_stack(long *a, long *b, int a_len)
{
	if (a_len == 3)
		sort_3(a);
	if (a_len == 4)
	{
		pb(a, b);
		sort_3(a);
		pa(a, b);
	}
}

void	ft_sort(long *a, long *b)
{
	int	a_len;

	a_len = ft_intlen(a);
	if (a_len == 2)
	{
		if (a[1] < a[0])
			sa(a);
		else
			return ;
	}
	else if (a_len > 2 && a_len < 5)
		sort_small_stack(a, b, a_len);
	else if (a_len >= 5)
		sort_big_stack(a, b, a_len);
}
