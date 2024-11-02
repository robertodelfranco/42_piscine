/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:33:24 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/07/18 11:33:29 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
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
	char str[]= "H1 rob3rt4";
	char str1[]= "wegrergser90080982309";
	char str2[]= "10";
	char str3[]= "robert"; // exemplo certo
	char str4[]= "robert*";
	char str5[]= "&54%abre";

	ft_str_is_alpha(str);

	printf("str: %d\n", ft_str_is_alpha(str));
	printf("str: %d\n", ft_str_is_alpha(str1));
	printf("str: %d\n", ft_str_is_alpha(str2));
	printf("str: %d\n", ft_str_is_alpha(str3));
	printf("str: %d\n", ft_str_is_alpha(str4));
	printf("str: %d\n", ft_str_is_alpha(str5));
	return 0;
}
*/