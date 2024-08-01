/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <rdel-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:46:43 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/07/31 18:31:00 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
		return (0);
	i = 2;
	result = 1;
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}

int	main(void)
{
	printf("%d", ft_iterative_factorial(1));
}
