/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:38:17 by rhernand          #+#    #+#             */
/*   Updated: 2024/04/25 20:12:09 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_pos(int n)
{
	unsigned int	pos;

	pos = 1;
	if (n < 0)
	{
		pos++;
	}
	while (n / 10 != 0)
	{
		n = n / 10;
		pos++;
	}
	return (pos);
}

char	*ft_itoa(int n)
{
	char				*str;
	unsigned int		pos;

	pos = ft_pos(n);
	str = (char *) malloc((pos + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	str[pos--] = '\0';
	while (n >= 1 || n <= -1)
	{
		if (n < 0)
			str[pos] = -(n % 10) + 48;
		else
			str[pos] = (n % 10) + 48;
		n = n / 10;
		pos --;
	}
	return (str);
}

/* int	main(void)
{
	int		n;

	n = -46;
	printf("result = %s\n", ft_itoa(n));
	return (0);
} */
