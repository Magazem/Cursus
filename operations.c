/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 20:26:02 by ysuliman          #+#    #+#             */
/*   Updated: 2024/11/10 21:00:41 by ysuliman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(long *a)
{
	int	i;
	int	tmp;

	i = ft_intlen(a) - 1;
	if (i > 0)
	{
		tmp = a[i];
		a[i] = a[i - 1];
		a[i - 1] = tmp;
	}
	write(1, "sa\n", 3);
}

void	sb(long *b)
{
	int	i;
	int	tmp;

	i = ft_intlen(b) - 1;
	if (i > 0)
	{
		tmp = b[i];
		b[i] = b[i - 1];
		b[i - 1] = tmp;
	}
	write(1, "sb\n", 3);
}

void	ss(long *a, long *b)
{
	int	i;
	int	tmp;

	i = ft_intlen(b) - 1;
	if (i > 0)
	{
		tmp = b[i];
		b[i] = b[i - 1];
		b[i - 1] = tmp;
	}
	i = ft_intlen(a) - 1;
	if (i > 0)
	{
		tmp = a[i];
		a[i] = a[i - 1];
		a[i - 1] = tmp;
	}
	write(1, "ss\n", 3);
}

void	pa(long *a, long *b)
{
	int	i;
	int	n;

	i = ft_intlen(b) - 1;
	n = ft_intlen(a);
	if (b[i] && i >= 0)
		a[n++] = b[i];
	b[i] = '\0';
	a[n] = '\0';
	write(1, "pa\n", 3);
}

void	pb(long *a, long *b)
{
	int	i;
	int	n;

	i = ft_intlen(b);
	n = ft_intlen(a) - 1;
	if (a[n] && n >= 0)
		b[i++] = a[n];
	a[n] = '\0';
	b[i] = '\0';
	write(1, "pb\n", 3);
}

void	ra(long *a)
{
	int		len;
	long	top;

	len = ft_intlen(a) - 1;
	if (len < 1)
		return ;
	top = a[len];
	while (len > 0)
	{
		a[len] = a[len - 1];
		len--;
	}
	a[0] = top;
	write(1, "ra\n", 3);
}

void	rb(long *b)
{
	int		len;
	long	top;

	len = ft_intlen(b) - 1;
	if (len < 1)
		return ;
	top = b[len];
	while (len > 0)
	{
		b[len] = b[len - 1];
		len--;
	}
	b[0] = top;
	write(1, "rb\n", 3);
}

void	rr(long *a, long *b)
{
	int		len;
	long	top;

	len = ft_intlen(a) - 1;
	if (len < 1)
		return ;
	top = a[len];
	while (len > 0)
	{
		a[len] = a[len - 1];
		len--;
	}
	a[0] = top;
	len = ft_intlen(b) - 1;
	if (len < 1)
		return ;
	top = b[len];
	while (len > 0)
	{
		b[len] = b[len - 1];
		len--;
	}
	b[0] = top;
	write(1, "rr\n", 3);
}

void	rra(long *a)
{
	int		len;
	int		i;
	long	bottom;

	len = ft_intlen(a) - 1;
	if (len < 1)
		return ;
	bottom = a[0];
	i = 0;
	while (i < len)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[len] = bottom;
	write(1, "rra\n", 4);
}

void	rrb(long *b)
{
	int		len;
	int		i;
	long	bottom;

	len = ft_intlen(b) - 1;
	if (len < 1)
		return ;
	bottom = b[0];
	i = 0;
	while (i < len)
	{
		b[i] = b[i + 1];
		i++;
	}
	b[len] = bottom;
	write(1, "rrb\n", 4);
}

void	rrr(long *a, long *b)
{
	int		len;
	int		i;
	long	bottom;

	len = ft_intlen(b) - 1;
	bottom = b[0];
	i = 0;
	while (i < len)
	{
		b[i] = b[i + 1];
		i++;
	}
	b[len] = bottom;
	len = ft_intlen(a) - 1;
	if (len < 1)
		return ;
	bottom = a[0];
	i = 0;
	while (i < len)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[len] = bottom;
	write(1, "rrr\n", 4);
}
