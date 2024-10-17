/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:49:23 by ysuliman          #+#    #+#             */
/*   Updated: 2024/10/17 13:29:22 by ysuliman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	bits_num(int n)
{
	int	count;

	count = 0;
	while (n)
	{
		count += 1;
		n = n >> 1;
	}
	return (count);
}

void	bubble_sort(long *morph, int a_len)
{
	long	temp;
	int		i;
	int		j;

	i = 0;
	while (i < a_len - 1)
	{
		j = 0;
		while (j < a_len - i - 1)
		{
			if (morph[j] > morph[j + 1])
			{
				temp = morph[j];
				morph[j] = morph[j + 1];
				morph[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

void	bit_sort(long *a, long *b, long biggest_num, int a_len)
{
	int	maximum_bits;
	int	i;
	int	j;
	int	num_zeros;

	i = -1;
	maximum_bits = bits_num(biggest_num);
	while (++i < maximum_bits)
	{
		j = -1;
		num_zeros = 0;
		while (++j < a_len)
		{
			if (((a[ft_intlen(a) - 1] >> i) & 1) == 1)
				ra(a);
			else
			{
				pb(a, b);
				num_zeros++;
			}
		}
		while (num_zeros-- > 0)
			pa(a, b);
	}
}

void	sort_big_stack(long *a, long *b, int a_len)
{
	long	*morph;
	int		i;

	i = 0;
	morph = malloc(sizeof(long) * a_len);
	while (i < a_len)
	{
		morph[i] = a[i];
		i++;
	}
	bubble_sort(morph, a_len);
	bit_sort(a, b, morph[a_len - 1], a_len);
	free(morph);
}
