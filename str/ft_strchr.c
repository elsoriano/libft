/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:53:36 by rhernand          #+#    #+#             */
/*   Updated: 2024/09/07 14:46:29 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* if '\0' is passed it should locate the null caracter of the string

#include <string.h>
#include <stdio.h>
*/

#include "libft.h"

/*Finds character C in string *s. Returns a pointer to the first ocurrence*/

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c % 256)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == c % 256)
		return ((char *) &s[i]);
	return (NULL);
}

/*int	main(void)
{
	char	s[] = "teste";
	int		c;

	c = 'e';
	printf("strchr result = %s\n", strchr(s, c + 256));
	printf("ft_strchr result = %s\n", ft_strchr(s, c + 256));
	return (0);
}*/
