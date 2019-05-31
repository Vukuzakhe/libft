/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:21:37 by vmabuza           #+#    #+#             */
/*   Updated: 2019/05/31 15:43:57 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(char *s1, char *s2, size_t len)
{
	size_t len1;
	size_t len2;

	len2 = ft_strlen(s2);
	if (!len2)
		return (s1);
	else
		while (len >= len2)
		{
			len--;
			if (!ft_memcmp(s1, s2, len2))
				return (s1);
			s1++;
		}
	return (NULL);
}

/*int main(void)
{
	char str[] = "someone did something";

	printf("%s", (ft_strnstr(str, "did", 20)));
	return (0);
}*/
