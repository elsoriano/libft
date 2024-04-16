/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 22:36:16 by rhernand          #+#    #+#             */
/*   Updated: 2024/04/16 23:16:51 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, t_size n)
{
	unsigned int	c;

	c = 0;
	if (n == 0)
		return (0);
	while (c < (n - 1) && s1[c] == s2[c] && s1[c] && s2[c])
	{
		c++;
	}
	return ((unsigned char)s1[c] - (unsigned char)s2[c]);
}

/*int	main(void)
{
	char	s1[] = "abcdef";
	char	s2[] = "abc\375xx";
	int		n;

	n = 5;
	printf("strncmp resutl = %d\n", strncmp(s1, s2, n));
	printf("ft_strncmp result = %d\n", ft_strncmp(s1, s2, n));
}*/
