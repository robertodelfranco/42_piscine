/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <rdel-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 11:43:25 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/07/28 18:54:54 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict_h.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

long long	ft_atoi(char *str)
{
	long long	i;
	long long	negative;
	long long	num;

	i = 0;
	num = 0;
	negative = 1;
	while (str[i] == ' ' || str[i] == '\t'
		|| str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\v')
		i++;
	if (str[i] == '-')
		negative = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * negative);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *c)
{
	char	*dest;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(c);
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	while (i < len)
	{
		dest[i] = c[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
