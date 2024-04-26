/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:45:27 by rhernand          #+#    #+#             */
/*   Updated: 2024/04/26 15:35:58 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	int		start;
	int		end;
	char	*str;

	start = 0;
	end = ft_strlen(s1);
	str = 0;
	if (s1 && set)
	{
		while (s1 && ft_strchr(set, s1[start]))
			start++;
		while (s1 && ft_strchr(set, s1[end - 1]))
			end--;
		str = ft_substr(s1, start, end - start);
		if (!str)
			return (NULL);
	}
	return (str);
}

/* int	main(void)
{
	char	s[] = "HelloW";
	char	set[] = "HeWo";

	printf("ft_strtrim result = %s\n", ft_strtrim(s, set));
	return (0);
} */
