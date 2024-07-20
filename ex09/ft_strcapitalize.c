/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:38:11 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/07/18 11:38:16 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_alphanumeric(char c);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize_next;

	i = 0;
	capitalize_next = 1;
	while (str[i] != '\0')
	{
		if (is_alphanumeric(str[i]))
		{
			if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 'a' + 'A';
			else if (!capitalize_next && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] - 'A' + 'a';
			capitalize_next = 0;
		}
		else
			capitalize_next = 1;
		i++;
	}
	return (str);
}

int	is_alphanumeric(char c)
{
	if ((c > '`' && c < '{') || (c > '@' && c < '[') || (c > '/' && c < ':'))
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	char	str[] = "oI, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	char	str2[] = "oLa, 6tudo BBem?";
	char	str3[] = "oiII, ---tudo e 98vc?";
	char	str4[] = "OI, TUDO BEM?";

	ft_strcapitalize(str);
	ft_strcapitalize(str2);
	ft_strcapitalize(str3);
	ft_strcapitalize(str4);

	printf("%s\n", str);
	printf("%s\n", str2);
	printf("%s\n", str3);
	printf("%s\n", str4);
}
*/