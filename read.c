/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <rdel-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 11:44:32 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/07/28 19:15:44 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict_h.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

int	validation(int argc, char **argv, char **num, char **dict)
{
	if (argc == 2)
	{
		*dict = "dict/numbers.dict";
		*num = argv[1];
		return (1);
	}
	return (0);
}

t_list	*ft_read(char *dict)
{
	int		i;
	char	c[1];
	char	*tmp;
	int		fd;
	t_list	*tab;

	fd = open(dict, O_RDONLY);
	ft_open(fd);
	tab = malloc(sizeof(t_list) * 41);
	i = -1;
	while (++i < 41)
	{
		tab[i].nb = ft_atoi(ft_getnb(fd));
		read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		if (c[0] == ':')
			read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		tmp = ft_getval(fd, c);
		tab[i].val = ft_strdup(tmp);
		free(tmp);
	}
	return (tab);
}

int	ft_open(int fd)
{
	if (fd == -1)
		close (fd);
	return (fd);
}
