/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:31:30 by vmabuza           #+#    #+#             */
/*   Updated: 2019/05/31 15:40:06 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *str1)
{
	while(*str)
	{
		char *strt;
		char *ocrn;

		strt = str;
		ocrn = str1;
		while(*str && *ocrn && *str == *ocrn)
		{
			str++;
			ocrn++;
		}
		if (!*ocrn)
			return (strt);
		str = strt + 1;
	}
	return (NULL);
}

/*int main()
{
	char s1[] = "This was awesome";

    printf ("Returned String: %s\n", ft_strstr(s1, "b"));

	return 0;
}*/
