/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adv_split.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:34:12 by rhernand          #+#    #+#             */
/*   Updated: 2024/10/17 12:35:55 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_spc_fix(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '^')
			str[i] = ' ';
		i++;
	}
}

void	ft_set_str(char *str, char c)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = ft_strchr(str, c);
	while (tmp[i] != c)
	{
		if (tmp[i] == ' ')
			tmp[i] = '^';
		i++;
	}
}

char	**ft_adv_split(char *str)
{
	char		*aux;
	char		**split;
	static int	i = 0;

	if (!str[i])
		return (split);
	if (!str)
		return (NULL);
	if (!ft_strchr(str, 34) && !ft_strchr(str, 39))
		return (ft_split(str, ' '));
	aux = ft_strdup(str);
	if (ft_strchr(aux, 34))
		ft_set_str(aux, 34);
	**split = ft_split(aux, ' ');
	free(aux);
	while (split[i])
	{
		aux = ft_strtrim(split[i], "\"");
		free(split[i]);
		ft_spc_fix(aux);
		split[i] = aux;
		i++;
	}
	return (split);
}
int	main(void)
{
	char	*str = "Hello, world! \"Hello\" 'World'";
	char	**split;

	split = ft_adv_split(str);
	free (split);
	return (0);
}