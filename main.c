/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <rdel-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 11:37:31 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/07/28 19:16:48 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict_h.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

int	test_num(char *num)
{
	int	i;

	i = 0;
	while (num[i])
	{
		if (num[i] < '0' || num[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	getdec(long long nb)
{
	if (nb >= 90)
		return (90);
	else if (nb >= 80)
		return (80);
	else if (nb >= 70)
		return (70);
	else if (nb >= 60)
		return (60);
	else if (nb >= 50)
		return (50);
	else if (nb >= 40)
		return (40);
	else if (nb >= 30)
		return (30);
	else if (nb >= 20)
		return (20);
	else if (nb <= 20)
		return (nb);
	else
		return (0);
}

long long	getmult(long long nb)
{
	if (nb >= 1000000000000)
		return (1000000000000);
	else if (nb >= 1000000000)
		return (1000000000);
	else if (nb >= 1000000)
		return (1000000);
	else if (nb >= 1000)
		return (1000);
	else if (nb >= 100)
		return (100);
	else
		return (getdec(nb));
}

void	ft_print(long long n, t_list *tab, long long *first)
{
	long long	i;
	long long	mult;

	i = 0;
	mult = getmult(n);
	if (mult >= 100)
		ft_print(n / mult, tab, first);
	if (*first == 0)
		write(1, " ", 1);
	first = 0;
	while (i < 41 && tab[i].nb != mult)
		i++;
	if (i < 41)
		ft_putstr(tab[i].val);
	else
		ft_putstr("Dict Error\n");
	if (mult != 0 && n % mult != 0)
		ft_print(n % mult, tab, first);
}

int	main(int argc, char *argv[])
{
	long long		add_first;
	long long		*first;
	t_list			*tab;
	char			*dict;
	char			*num;

	add_first = 1;
	first = &add_first;
	if ((validation(argc, argv, &num, &dict) == 0 || test_num(num) == 0))
	{
		ft_putstr("Error\n");
		return (0);
	}
	tab = ft_read(dict);
	ft_print(ft_atoi(argv[1]), tab, first);
	return (0);
}
