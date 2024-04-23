/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:37:42 by rhernand          #+#    #+#             */
/*   Updated: 2024/04/23 14:36:31 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <xlocale.h>
# include <stdio.h>

typedef unsigned long	t_size;

int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
size_t			ft_strlen(const char *s);
t_size			ft_strlcpy(char *dst, char *src, t_size dstsize);
t_size			ft_strlcat(char *dst, const char *src, size_t dstsize);
char			*ft_strnstr(char *haystack, char *needle, t_size len);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(char *s, int c);
char			*ft_strrchr(char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, t_size n);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
int				ft_memcmp(void *s1, void *s2, size_t n);
int				ft_atoi(const char *str);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strdup(const char *s1);
char			*ft_substr(const char *s, unsigned int start, size_t len);
char			*ft_strjoin(const char *s1, const char *s2);

#endif
