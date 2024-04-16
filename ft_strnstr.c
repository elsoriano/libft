/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:15:19 by rhernand          #+#    #+#             */
/*   Updated: 2024/04/15 23:09:25 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Finds needle in haystack
if needle is empty returns haystack
if needle not found returns null
else returns pointer to first char of needle in haystack
*/

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, t_size len)
{
	t_size	i;
	t_size	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			while (haystack[i + j] == needle[j] \
					&& haystack[i + j] && i + j < len)
			{
				j++;
			}
			if (needle[j] == '\0')
				return (&haystack[i]);
			else
				j = 0;
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	haystack[] = "donde lo tengo que encontrar";
	char	needle[] = "tengo";

	printf("strnstr result = %s\n", strnstr(haystack, needle, 2));
	printf("ft_strnstr result = %s\n", ft_strnstr(haystack, needle, 2));
	return (0);
}*/
