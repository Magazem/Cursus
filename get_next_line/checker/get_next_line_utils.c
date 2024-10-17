/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 14:10:34 by ysuliman          #+#    #+#             */
/*   Updated: 2024/04/06 14:10:36 by ysuliman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest_;
	const char	*src_;

	dest_ = (char *)dest;
	src_ = (const char *)src;
	if (src_ < dest_ && dest_ < src_ + n)
	{
		src_ += n;
		dest_ += n;
		while (n--)
		{
			*--dest_ = *--src_;
		}
	}
	else
	{
		while (n--)
		{
			*dest_++ = *src_++;
		}
	}
	return (dest);
}
