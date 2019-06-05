/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:47:32 by vmabuza           #+#    #+#             */
/*   Updated: 2019/06/04 17:29:46 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s, const char *t, size_t n)
{
	while (n--)
	{
		if (*s != *t)
			return ((unsigned char)*s - (unsigned char)*t);
		else
			++s;
		++t;
	}
	return (0);
}
