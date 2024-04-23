/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:45:27 by rhernand          #+#    #+#             */
/*   Updated: 2024/04/23 19:44:27 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_start(const char *s1, const char *set)
{
	size_t	start;
	size_t	i;

	i = 0;
	start = 0;
	while (set[i] && s1[start])
	{
		if (s1[start] == set[i])
		{
			start++;
			i = 0;
		}
		else
			i++;
	}
	return (start);
}

static size_t	ft_end(const char *s1, const char *set)
{
	size_t	end;
	size_t	i;

	i = 0;
	end = ft_strlen(s1);
	while (set[i] && end >= 0)
	{
		if (s1[end - 1] == set[i])
		{
			end--;
			i = 0;
		}
		else
			i++;
	}
	return (end);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	size_t	len;
	char	*buff;

	if (!set[0])
		return (ft_strdup(s1));
	start = ft_start(s1, set);
	printf("start %zu\n", start);
	end = ft_end(s1, set);
	printf("end %zu\n", end);
	len = end - start;
	buff = (char *) malloc((end - start + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	i = 0;
	while (i < len)
	{
		buff[i] = s1[start + i];
		i++;
	}
	buff[i] = '\0';
	return (buff);
}

/* int	main(void)
{
	char	s[] = "HelloW";
	char	set[] = "HeWo";

	printf("ft_strtrim result = %s\n", ft_strtrim(s, set));
	return (0);
} */
