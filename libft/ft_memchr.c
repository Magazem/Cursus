/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:42:08 by ysuliman          #+#    #+#             */
/*   Updated: 2024/06/24 13:50:12 by ysuliman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	unsigned char	*str;
	unsigned char	val;

	val = (unsigned char) value;
	str = (unsigned char *)ptr;
	while (num)
	{
		if (*str == val)
			return (str);
		str++;
		num--;
	}
	return (NULL);
}
