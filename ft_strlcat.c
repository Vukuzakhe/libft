/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:10:37 by vmabuza           #+#    #+#             */
/*   Updated: 2019/05/24 14:03:02 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

unsigned int    ft_strlen(const char *str);
size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	char *d;
	const char *s;
	size_t dlen;
	size_t n;

	d = dest;
	s = src;
	n = size;
	while (n-- != 0 && *d)
		d++;
	dlen = d - dest;
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen(s));
	while (*s)
	{
		if (n != 1)
			*dest = *src;
			n--;
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}

int main(void)
{
	char a[] = "aa";
	char b[] = "abcd";

	printf("%zu", (ft_strlcat(a, b, 1)));
	return (0);
}
