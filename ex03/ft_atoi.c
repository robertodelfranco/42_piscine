/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:33:18 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/07/24 15:33:21 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	c;

	i = 0;
	num = 0;
	c = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			c++;
		else if (str[i] >= '0' && str[i] <= '9')
		{
			num = num * 10 + (str[i] - '0');
		}
		else if (!((str[i] >= 48 && str[i] <= 57)
				|| str[i] == '-' || str[i] == '+'))
			break ;
		i++;
	}
	if (c % 2 != 0)
		num = num *(-1);
	return (num);
}

/*
int main()
{
	char str[]= "   +-1234 97";

	ft_atoi(str);
	printf("%d", ft_atoi(str));
}
*/