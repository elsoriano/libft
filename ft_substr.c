/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:59:28 by rhernand          #+#    #+#             */
/*   Updated: 2024/04/24 17:04:23 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			s_len;
	char			*buff;

	s_len = ft_strlen(s);
	i = 0;
	if (!s)
		return (NULL);
	if (s_len <= (size_t) start || !len)
		len = 0;
	buff = (char *) malloc((len + 1) * sizeof(char));
	if (buff == NULL)
		return (NULL);
	while (s[start] && i < len)
	{
		buff[i] = s[start + i];
		i++;
	}
	buff[i] = '\0';
	return (buff);
}

/* int	main(void)
{
	char	str[] = "lorem ipsum";

	printf("resutl ft_substr = %s\n", ft_substr(str, 0, 0));
	return (0);
} */