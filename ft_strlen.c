/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:44:14 by rhernand          #+#    #+#             */
/*   Updated: 2024/04/20 21:04:15 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include "stdio.h"*/

size_t	ft_strlen(const char *s)
{
	size_t	j;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}

/*int	main(void)
{
	printf("ft_strlen %lu\n", ft_strlen("hola"));
}*/
