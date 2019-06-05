/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:21:37 by vmabuza           #+#    #+#             */
/*   Updated: 2019/06/04 18:22:47 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	len1;
	size_t	len2;

	len2 = ft_strlen(s2);
	if (!len2)
		return ((char)*s1);
	else
		while (len >= len2)
		{
			len--;
			if (!ft_memcmp(s1, s2, len2))
				return (char)*s1);
			s1++;
		}
	return (NULL);
}
