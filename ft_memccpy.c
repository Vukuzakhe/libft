/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:17:59 by vmabuza           #+#    #+#             */
/*   Updated: 2019/06/05 17:08:37 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;
	char		*dest;
	char		*source;

	i = 0;
	dest = dst;
	source = (char *)src;
	while (i < n && (i == 0 || source[i - 1] != c))
	{
		dest[i] = source[i];
		i++;
	}
	if (i > 0 && source[i - 1] == c)
		return (dest + i);
	else
		return (NULL);
}
