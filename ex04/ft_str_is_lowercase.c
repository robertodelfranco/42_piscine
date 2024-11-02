/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:51:08 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/07/18 17:51:11 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(*str >= 97 && *str <= 122))
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
	char str[]= "adrA";
	char str2[]= "Aa";
	char str3[]= "?";
	char str4[]= "df*";
	char str5[]= "";
	char str6[]= "minusculo";
	char str7[]= "minusculAA";

	ft_str_is_lowercase(str);

	printf("%d\n", ft_str_is_lowercase(str));
	printf("%d\n", ft_str_is_lowercase(str2));
	printf("%d\n", ft_str_is_lowercase(str3));
	printf("%d\n", ft_str_is_lowercase(str4));
	printf("%d\n", ft_str_is_lowercase(str5));
	printf("%d\n", ft_str_is_lowercase(str6));
	printf("%d\n", ft_str_is_lowercase(str7));
}
*/