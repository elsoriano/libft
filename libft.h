/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:37:42 by rhernand          #+#    #+#             */
/*   Updated: 2024/04/16 22:11:46 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <xlocale.h>

typedef unsigned long	t_size;

int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
t_size			ft_strlen(const char *s);
t_size			ft_strlcpy(char *dst, char *src, t_size dstsize);
t_size			ft_strlcat(char *dst, char *src, t_size dstsize);
char			*ft_strnstr(char *haystack, char *needle, t_size len);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(char *s, int c);
char			*ft_strrchr(char *s, int c);

#endif
