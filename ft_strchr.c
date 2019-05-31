/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:38:13 by vmabuza           #+#    #+#             */
/*   Updated: 2019/05/31 15:30:58 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(char *s, int c)
{
     while (*s != c && *s != '\0')
		 s++;
	 if (*s == c)
		 return (s);
         else
             return (NULL);
}

/*int main(void)
{
	char a[] = "something";
	printf("%s\n", (ft_strchr(a, 'o')));
	printf("%s\n", (strchr(a, 'o')));
	printf("%s\n", (strchr(a, 'w')));
	printf("%s", (ft_strchr(a, 'v')));
	return (0);
}*/
