/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <rdel-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:46:43 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/07/30 17:16:17 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (i < 0)
		return (0);
	if (i == 0)
		return (1);
	while (i > 0)
	{
		nb += nb * (i - 1);
		i--;
	}
	return (nb);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(5));
// }