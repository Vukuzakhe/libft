/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 14:52:08 by vmabuza           #+#    #+#             */
/*   Updated: 2019/05/28 15:39:59 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
char *ft_strcpy(char *dest, char *src);
int ft_strncmp(const char *s, const char *t, size_t n) {
    while(n--) {
        if(*s != *t) {
            return *s - *t;
        }
        else {
            ++s;
            ++t;
        }
    }

    return 0;
}
/*
int main(int argc, const char * argv[])
{
    int result;

    char example1[50];
    char example2[50];

    ft_strcpy(example1, "C strncmp at TechOnTheNet.com");
    ft_strcpy(example2, "C strncmp is a string function");

    result = ft_strncmp(example1, example2, 11);

    if (result == 0) printf("Strings are the same\n");

    if (result < 0) printf("Second string is less than the first\n");

    return 0;
}*/
