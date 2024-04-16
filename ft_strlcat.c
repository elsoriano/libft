/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:32:08 by rhernand          #+#    #+#             */
/*   Updated: 2024/04/15 23:21:16 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Hay que crear un buffer con el size que quieras que sea el total del string. 
Si size <= dst, la función devuelve size + src.
Si el size >= que dst, la función devuelve dst + src.

#include <string.h>
#include <stdio.h>
*/

#include "libft.h"

t_size	ft_strlcat(char *dst, char *src, t_size size)
{
	t_size	dst_size;
	t_size	dst_count;
	t_size	src_count;

	dst_size = ft_strlen(dst);
	dst_count = dst_size;
	src_count = 0;
	if (dst_count >= size)
		return (size + ft_strlen(src));
	while (dst_count < size - 1)
	{
		dst[dst_count] = src[src_count];
		dst_count ++;
		src_count ++;
	}
	dst[dst_count] = '\0';
	return (ft_strlen(src) + dst_size);
}

/*int	main(void)
{
	char	src[] = "hola";
	char	dst[] = "adiossss";
	char	buffer[15];
	char	buffer_ft[15];

	strlcpy(buffer, dst, 12);
	ft_strlcpy(buffer_ft, dst, 12);
	printf("strlcat = %lu\n", strlcat(buffer, src, 12));
	printf("dst strlcat = %s\n", buffer);
	printf("src strlcat = %s\n", src);
	ft_strlcpy(buffer_ft, dst, 12);
	printf("ft_strlcat = %lu\n", ft_strlcat(buffer_ft, src, 12));
	printf("dst strlcat = %s\n", buffer_ft);
}
*/
