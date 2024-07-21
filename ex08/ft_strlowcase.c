/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:36:16 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/07/18 11:36:18 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
		{
			*str = *str + 32;
		}
		str++;
	}
	return (ptr);
}

/*
int	main(void)
{
    char str[]= "      HELLO ";
    char str2[]= "H*************@##@#whoewlJKJKJ";
    char str3[]= "&*&*&&*&&$##@HAJHAJHAJH";
    char str4[]= "23153716243JKAJKSJ";
    char str5[]= "hwlAAAaaaksodjJK";

    ft_strlowcase(str);
    ft_strlowcase(str2);
    ft_strlowcase(str3);
    ft_strlowcase(str4);
    ft_strlowcase(str5);

    printf("%s\n", str);
    printf("%s\n", str2);
    printf("%s\n", str3);
    printf("%s\n", str4);
    printf("%s\n", str5);
}
*/