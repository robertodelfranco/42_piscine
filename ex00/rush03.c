/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 12:10:16 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/07/13 12:10:24 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	colum;
	int	line;

	line = 1;
	while (line <= y && x > 0)
	{
		colum = 1;
		while (colum <= x)
		{
			if ((colum == 1 && line == 1) || (colum == 1 && line == y))
				ft_putchar('A');
			else if ((colum == x && line == 1) || (colum == x && line == y))
				ft_putchar('C');
			else if ((colum == 1) || (colum == x))
				ft_putchar('B');
			else if ((line == 1) || (line == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			colum++;
		}
		ft_putchar('\n');
		line++;
	}
}
