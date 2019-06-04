/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:16:40 by vmabuza           #+#    #+#             */
/*   Updated: 2019/06/04 13:03:16 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	char	*last;

	last = NULL;
	if (c == '\0')
		return (ft_strchr(s, c));
	while ((s = ft_strchr(s, c)) != NULL)
	{
		last = s;
		s++;
	}
	return (last);
}
