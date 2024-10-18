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

void	print_arrays(long *morph, long *a, long *index, int a_len)
{
	printf("Morph: ");
	for (int i = 0; i < a_len; i++)
	{
		printf("%ld ", morph[i]);
	}
	printf("\n");
	printf("Original A: ");
	for (int i = 0; i < a_len; i++)
	{
		printf("%ld ", a[i]);
	}
	printf("\n");
	printf("Index: ");
	for (int i = 0; i < a_len; i++)
	{
		printf("%ld ", index[i]);
	}
	printf("\n");
}

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

void	bubble_sort(long *morph, int a_len, long *index)
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
				temp = index[j];
				index[j] = index[j + 1];
				index[j + 1] = temp;
				printf("Swapped: morph[%d]=%ld with morph[%d]=%ld\n", j, morph[j
					+ 1], j + 1, morph[j]);
				printf("Swapped indices: index[%d]=%ld with index[%d]=%ld\n", j,
					index[j + 1], j + 1, index[j]);
			}
			j++;
		}
		i++;
	}
}

void	bit_sort(long *a, long *b, int a_len)
{
	int	maximum_bits;
	int	i;
	int	j;
	int	num_zeros;

	i = -1;
	maximum_bits = bits_num(a_len);
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
	long	*index;

	morph = malloc(sizeof(long) * a_len);
	index = malloc(sizeof(long) * a_len);
	i = 0;
	while (i < a_len)
	{
		index[i] = i + 1;
		morph[i] = a[i];
		i++;
	}
	printf("Before sorting:\n");
	print_arrays(morph, a, index, a_len);
	bubble_sort(morph, a_len, index);
	printf("After sorting:\n");
	print_arrays(morph, a, index, a_len);
	bit_sort(index, b, a_len);
	free(index);
	free(morph);
}
