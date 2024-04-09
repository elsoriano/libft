/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhernand <rhernand@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:08:35 by rhernand          #+#    #+#             */
/*   Updated: 2024/04/09 21:32:05 by rhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <ctype.h>*/

int ft_isalpha(int c)
{
    if  ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    else
        return (0);
}

/*int    main(void)
{
    printf("%i\n", ft_isalpha('?'));
    return (0);
}

int    main(void)
{
    printf("%i\n",isalpha('p'));
    return ;
}*/
