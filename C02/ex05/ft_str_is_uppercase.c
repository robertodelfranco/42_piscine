/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:34:45 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/07/18 11:34:50 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 65 && *str <= 90))
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
	char str[]= "AAAAAAAAAa";
	char str2[]= "AAA AA";
	char str3[]= "AHJ/adadaAAAA";
	char str4[]= "BBB?* ";
	char str5[]= "";
	char str6[]= "NHJSWUYSWJHDKJHDE";

	ft_str_is_uppercase(str);

	printf("%d\n", ft_str_is_uppercase(str));
	printf("%d\n", ft_str_is_uppercase(str2));
	printf("%d\n", ft_str_is_uppercase(str3));
	printf("%d\n", ft_str_is_uppercase(str4));
	printf("%d\n", ft_str_is_uppercase(str5));
	printf("%d\n", ft_str_is_uppercase(str6));
}
*/