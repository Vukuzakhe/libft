/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 12:17:18 by vmabuza           #+#    #+#             */
/*   Updated: 2019/06/05 17:40:00 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	char		*tmp;
	const char	*s;

	if (dst <= src)
	{
		tmp = dst;
		s = src;
		while (len--)
			*tmp++ = *s++;
	}
	else
	{
		tmp = dst;
		tmp += len;
		s = src;
		s += len;
		while (len--)
			*--tmp = *--s;
	}
	return (dst);
}
