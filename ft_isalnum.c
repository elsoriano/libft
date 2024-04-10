/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:30:13 by rhernand          #+#    #+#             */
/*   Updated: 2024/04/10 14:37:57 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int ft_isalnum(int c)
{
    if (ft_isalpha((c) == 1 || ft_isdigit(c) == 1))
        return (1);
    else
        return (0);
}

/*int    main(void)
{
    printf("%i\n", ft_isalpha('?'));
    return (0);
}*/

int    main(void)
{
    printf("%i\n",isalnum('5'));
    return 0;
}