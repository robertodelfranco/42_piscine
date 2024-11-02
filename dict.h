/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_h.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <rdel-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 11:40:37 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/07/28 19:13:42 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_H
# define DICT_H

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <errno.h>

typedef struct s_list
{
	char	*val;
	int		nb;
}			t_list;

long long		ft_atoi(char *str);
long long		getmult(long long nb);
t_list			*ft_read(char *dict);
void			ft_putstr(char *str);
void			ft_print(long long n, t_list *tab, long long *first);
char			*ft_getval(int fd, char *c);
char			*ft_getnb(int fd);
char			*ft_strdup(char *c);
int				ft_strlen(char *str);
int				validation(int argc, char **argv, char **num, char **dict);
int				test_num(char *num);
int				getdec(long long nb);
int				ft_open(int fd);

#endif