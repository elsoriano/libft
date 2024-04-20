/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 19:50:19 by rhernand          #+#    #+#             */
/*   Updated: 2024/04/20 20:43:12 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/* #include <stdio.h> */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*buff;

	buff = malloc(count * size);
	if (buff == NULL)
		return (NULL);
	ft_bzero(buff, count * size);
	return (buff);
}

/* int	main(void)
{
	char	*buffer;

	buffer = (char *) ft_calloc(5, sizeof(char));
	buffer[4] = 'a';
	printf("What is in buffer[4] %c\n", buffer[4]);
} */
