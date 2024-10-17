/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adv_split2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:37:23 by rhernand          #+#    #+#             */
/*   Updated: 2024/10/17 12:51:06 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	**ft_adv_split(char *str)
{
	char	**aux;
	char	**split;
	int		i;

	i = 0;
	if (!ft_strchr(str, '\"'))
		return (ft_split(str, ' '));
	aux = ft_split(str, '\"');
	if (!aux[0] && aux[1])
		i++;
	split = ft_split(aux[i], ' ');
	while (split[i])
		i++;
	split[i] = aux[1];
	
}