/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:42:10 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/07/18 11:42:14 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(*str >= 48 && *str <= 57))
		{
			return (0);
		}	
		str++;
	}
	return (1);
}

/*
int	main(void)
{
    char str[]= "12314adsda1394809";
    char str2[]= " *dedw19283";
    char str3[]= " /hwu";
    char str4[]= "4019283";
    char str5[]= "";
    char str6[]= " ";
    
    ft_str_is_numeric(str);

    printf("%d\n", ft_str_is_numeric(str));
    printf("%d\n", ft_str_is_numeric(str2));
    printf("%d\n", ft_str_is_numeric(str3));
    printf("%d\n", ft_str_is_numeric(str4));
    printf("%d\n", ft_str_is_numeric(str5));
    printf("%d\n", ft_str_is_numeric(str6));
}
*/