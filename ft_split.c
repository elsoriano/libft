/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 19:40:22 by rhernand          #+#    #+#             */
/*   Updated: 2024/05/01 22:39:50 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_mal(const char *s, const char c)
{
	int		words;
	char	**strs;
	int		i;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			words++;
		while (s[i] != c && s[i])
			i++;
	}
	strs = (char **) malloc ((words + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	*(strs + words) = NULL;
	return (strs);
}

char	**ft_fill(const char *s, const char c)
{
	char	**strs;
	int		len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len = 0;
	strs = ft_mal(s, c);
	if (!strs)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i + len] != c && s[i + len])
			len++;
		if (s[i])
			strs[j++] = ft_substr(s, i, len);
		i = i + len;
		len = 0;
	}
	strs[j] = NULL;
	return (strs);
}

char	**ft_split(const char *s, const char c)
{
	char	**ptr;

	if (!s)
		return (NULL);
	ptr = ft_fill(s, c);
	return (ptr);
}

/* int	main(void)
{
	char	**strs;
	int		i;

	i = 0;
	strs = ft_split("  cuantas vacas tengo     ", ' ');
	while (strs[i])
		printf("%s\n", strs[i++]);
}
 */
