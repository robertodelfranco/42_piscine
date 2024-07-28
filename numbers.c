/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <rdel-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 11:45:29 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/07/28 19:06:56 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict_h.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

char	*ft_getnb(int fd)
{
	char	*str;
	char	c[1];
	int		i;

	str = malloc(sizeof(char) * 256);
	if (str == NULL)
		ft_putstr("Error\n");
	i = 0;
	read(fd, c, 1);
	while (c[0] == '\n')
		read(fd, c, 1);
	while (c[0] >= '0' && c[0] <= '9')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_getval(int fd, char *c)
{
	int		i;
	char	*str;

	str = malloc(sizeof(char) * 256);
	if (str == NULL)
		ft_putstr("Error\n");
	i = 0;
	while (c[0] != '\n')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	str[i] = '\0';
	return (str);
}
