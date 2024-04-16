/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:27:17 by rhernand          #+#    #+#             */
/*   Updated: 2024/04/16 20:47:22 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <ctype.h>
#include <stdio.h>*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		return (c - 32);
	return (c);
}

/*int	main(void)
{
	int	c;

	c = 'z';
	printf("toupper result = %c\n", toupper(c));
	printf("ft_toupper result = %c\n", ft_toupper(c));
	return (0);
}*/
