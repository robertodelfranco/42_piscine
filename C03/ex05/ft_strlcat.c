/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:19:18 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/07/22 15:19:19 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	i;

	d = 0;
	s = 0;
	i = 0;
	while (dest[d] && d < size)
		d++;
	while (src[s])
		s++;
	if (size <= d)
		return (size + s);
	while (src[i] && d + i < size - 1)
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (d + s);
}

/*
int main()
{
    char str1[]= "Hello, ";
    char str2[]= "caralho";
    int size = 4;

    ft_strlcat(str1, str2, size);
    printf("%s\n", str1);
    printf("%d", ft_strlcat(str1, str2, size));
}
*/