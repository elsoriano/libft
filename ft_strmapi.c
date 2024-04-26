/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:13:57 by rhernand          #+#    #+#             */
/*   Updated: 2024/04/26 12:52:22 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char	ft_char2u(unsigned int n, char c)
{
	char	a;

	n = 0;
	a = c + 1;
	return (a);
} */

char	*ft_strmapi(const char *s, char (*f) (unsigned int, char))
{
	unsigned int	i;
	char			*buff;

	buff = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	i = 0;
	while (s[i])
	{
		buff[i] = f(i, s[i]);
		i++;
	}
	buff[i] = '\0';
	return (buff);
}

/* int	main(void)
{
	char	str[] = "Hola";

	printf("string inicial = %s\n", str);
	printf("result = %s\n", ft_strmapi(str, ft_char2u));
	return (0);
} */
