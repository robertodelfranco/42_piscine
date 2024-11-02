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
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int i;

	i = 0;
	while(i < size / 2)
	{
		aux = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = aux;
		i++;
	}
}

int main(void)
{
	int tab[]= {0, 1, 2, 3, 4, 5, 6, 7};
    int size = 8;
	int i = 0;
    
	ft_rev_int_tab(tab, size);
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}

    return 0;
}
