/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 12:17:18 by vmabuza           #+#    #+#             */
/*   Updated: 2019/06/10 12:08:57 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	char		*tmp;
	const char	*s;
	size_t		i;

	tmp = dst;
	s = src;
	i = 0;
	if (tmp == NULL && s == NULL)
		return (NULL);
	if (s < tmp)
	{
		while (len--)
			tmp[len] = s[len];
	}
	else
		while (i < len)
		{
			tmp[i] = s[i];
			i++;
		}
	return (dst);
}
