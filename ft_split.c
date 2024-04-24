/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 19:48:05 by rhernand          #+#    #+#             */
/*   Updated: 2024/04/24 20:11:54 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(const char *s1, char c)
{
	int	i;

	i = 0;
	while (s1[i + 1] != c && s1[i])
	{
		i++;
	}
	return (i + 1);
}

static int	ft_breaks(const char *s, char c)
{
	size_t			i;
	unsigned int	bks;

	i = 0;
	bks = 0;
	while (s[i])
	{
		if (s[i] == c)
			bks++;
		i++;
	}
	return (bks);
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	int		i;
	int		len;
	int		start;
	int		breaks;

	i = 0;
	start = 0;
	len = 0;
	breaks = ft_breaks(s, c);
	str = (char **) malloc ((breaks + 2) * sizeof(char *));
	if (!str)
		return (NULL);
	while (i <= breaks)
	{
		len = ft_start(s, c);
		str[i] = ft_substr(s, 0, len);
		s = s + len;
		i++;
	}
	str[i] = NULL;
	free (str);
	return (str);
}

/* int	main(void)
{
	const char	str[] = "Vamos a LLevarnos Bien";
	char		c;
	int			i;
	char		**matrix;

	i = 0;
	c = 'm';
	matrix = ft_split(str, c);
	while (matrix[i])
	{
		printf("%s\n", matrix[i]);
		i++;
	}
	return (0);
} */
