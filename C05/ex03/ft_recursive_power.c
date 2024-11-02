/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <rdel-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:54:36 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/07/30 17:16:22 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

// int	main(void)
// {
// 	int	nb;
// 	int	power;
// 	nb = 0;
// 	power = 0;
// 	scanf("%d %d", &nb, &power);
// 	printf("%d", ft_recursive_power(nb, power));
// }