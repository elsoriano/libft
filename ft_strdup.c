/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:46:00 by rhernand          #+#    #+#             */
/*   Updated: 2024/04/20 21:09:19 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s1) + 1;
	s2 = (char *) malloc((len) * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	while (i < len)
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}

/* int	main(void)
{
	const char	str[] = "Hello World";

	printf("strdup result = %s\n", strdup(str));
	printf("ft_strdup result = %s\n", ft_strdup(str));
	return (0);
} */