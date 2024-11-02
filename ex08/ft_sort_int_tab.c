/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:08:44 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/07/16 12:11:33 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int np;
	int p;

	p = 0;
	while(p < size - 1)
	{
		np = 0;
		while(np < size - 1 - p)
		{
			if(tab[np] > tab[np + 1])
			{
				aux = tab[np];
				tab[np] = tab[np + 1];
				tab[np + 1] = aux;
			}
			np++;
		}
		p++;
	}
}

int main(void)
{
	int tab[]= {1, 3, 2, 0}; //9, 9, 1, 7, 3, 6, 5, 8, 4};
    int size = 4;
	int np = 0;
    
	ft_sort_int_tab(tab, size);
	while(np < size)
	{
		printf("%d", tab[np]);
		np++;
	}

    return 0;
}
