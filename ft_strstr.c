/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:31:30 by vmabuza           #+#    #+#             */
/*   Updated: 2019/06/10 17:08:48 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *str1)
{
	char	*strt;
	char	*ocrn;
	
	if (ft_strlen((char *)ocrn) == 0 && ft_strlen((char *)strt) == 0)
		return ((char *)str);
	while (*str)
	{
		strt = (char *)str;
		ocrn = (char *)str1;
		while (*str && *ocrn && *str == *ocrn)
		{
			str++;
			ocrn++;
		}
		if (!*ocrn)
			return ((char *)strt);
		str = strt + 1;
	}
	return (NULL);
}
