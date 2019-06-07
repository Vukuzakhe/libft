/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:17:59 by vmabuza           #+#    #+#             */
/*   Updated: 2019/06/07 12:24:29 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*dest;
	unsigned char		*source;

	i = 0;
	dest = dst;
	source = (unsigned char *)src;
	while (i < n && (i == 0 || source[i - 1] != c))
	{
		dest[i] = source[i];
		i++;
	}
	if (i > 0 && source[i - 1] == (unsigned char)c)
		return ((void*)dest + i);
	else
		return (NULL);
}
