/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:52:25 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/07/18 17:52:28 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	while (*str != 0)
	{
		if (*str >= 97 && *str <= 122)
		{
			*str = *str - 32;
		}
		str++;
	}
	return (str);
}

/*
int	main(void)
{
    char str[]= "hello, world!";
    char str2[]= "AAA093210931lllll";
    char str3[]= "hello, WEorld!";
    char str4[]= "HELLLO*hhhh";
    char str5[]= "*&%$hekllfho";

    ft_strupcase(str);
    ft_strupcase(str2);
    ft_strupcase(str3);
    ft_strupcase(str4);
    ft_strupcase(str5);
	
    printf("%s\n", str);
    printf("%s\n", str2);
    printf("%s\n", str3);
    printf("%s\n", str4);
    printf("%s\n", str5);
}
*/