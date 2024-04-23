/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 19:48:05 by rhernand          #+#    #+#             */
/*   Updated: 2024/04/23 23:04:40 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_fillmatrix(char **matrix, const char *s, char c)
{
	int		x;
	int		y;
	int		i;

	x = 0;
	y = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			matrix[x][y] = '\0';
			x++;
			y = 0;
		}
		matrix[x][y] = s[i];
		i++;
		y++;
	}
	matrix[x][y] = '\0';
	matrix[x + 1] = NULL;
	printf("s = %s\n", s);
	return ;
}

static char	**ft_cmatrix(unsigned int bks, size_t maxlen)
{
	char			**matrix;
	unsigned int	i;

	i = 0;
	matrix = (char **) malloc((bks + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	while (i <= bks)
	{
		matrix[i] = (char *) malloc((maxlen + 1) * sizeof(char));
		if (!matrix[i])
			return (NULL);
		i++;
	}
	return (matrix);
}

static size_t	ft_maxlen(const char *s, char c)
{
	size_t	max;
	size_t	i;

	max = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && max < i)
			max = i;
		i++;
	}
	return (max);
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
	size_t	bks;
	size_t	mx_len;
	char	**matrix;

	mx_len = ft_maxlen(s, c);
	bks = ft_breaks(s, c);
	matrix = ft_cmatrix(bks, mx_len);
	ft_fillmatrix(matrix, s, c);
	free (matrix);
	return (matrix);
}

/* int	main(void)
{
	const char	str[] = "Vamos a LLevarnos Bien";
	char		c;
	int			i;
	char		**matrix;

	i = 0;
	c = 'a';
	matrix = ft_split(str, c);
	while (matrix[i])
	{
		printf("%s\n", matrix[i]);
		i++;
	}
	return (0);
} */
