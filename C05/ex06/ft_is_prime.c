/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <rdel-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:34:32 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/07/30 17:16:26 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 1)
		return (0);
	else if (nb == 2)
		return (1);
	else if (nb < 0)
		return (0);
	while (nb % i != 0)
	{
		if (i > (nb / 2))
			return (1);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	int	a;
// 	a = 0;
// 	scanf("%d", &a);
// 	printf("%d", ft_is_prime(a));
// }