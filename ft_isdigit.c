/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:19:38 by rhernand          #+#    #+#             */
/*   Updated: 2024/04/09 21:29:03 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <ctype.h> */

int ft_isdigit(int c)
{
    if  (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}

/*int    main(void)
{
    printf("%i\n", ft_isdigit('9'));
    return (0);
}

int    main(void)
{
    printf("%i\n",isdigit('3'));
    return (0);
}*/