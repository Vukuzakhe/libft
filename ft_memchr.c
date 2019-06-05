/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:28:55 by vmabuza           #+#    #+#             */
/*   Updated: 2019/06/05 12:57:02 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;

	s = (unsigned char *)src;
	i = 0;
	if (n == 0)
		return (NULL);
	while (s[i] && i < n)
	{
		if (s[i] == (unsigned char)c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
