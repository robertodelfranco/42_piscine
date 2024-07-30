/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <rdel-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:15:42 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/07/30 17:16:28 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
		return (2);
	while (nb <= 2147483647)
	{
		i = 2;
		while (nb % i != 0)
		{
			if (i > (nb / 2))
				return (nb);
			i++;
		}
		nb++;
	}
	return (nb);
}

// int	main(void)
// {
// 	int	a;
// 	a = 0;
// 	scanf("%d", &a);
// 	printf("%d", ft_find_next_prime(a));
// }