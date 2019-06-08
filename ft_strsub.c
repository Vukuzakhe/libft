/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:33:44 by vmabuza           #+#    #+#             */
/*   Updated: 2019/06/08 13:54:25 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)(ft_memalloc(len + 1));
	if (str == NULL)
		return (NULL);
	else
		while (i < len)
		{
			str[i] = s[start + i];
			i++;
		}
	str[i] = '\0';
	return (str);
}
