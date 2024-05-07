/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 09:46:04 by rodrigo           #+#    #+#             */
/*   Updated: 2024/05/07 10:25:46 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del) (void*))
{
	if (!lst)
		return ;
	del(lst->content);
	free (lst);
	lst = NULL;
	return ;
}

/* void	ft_del(void *content)
{
	return ;
}

int	main(void)
{
	t_list *lst;

	lst = malloc(sizeof(t_list));
	if (!lst)
		return (1);
	lst->content = "hello";
	lst->next = NULL;
	ft_lstdelone(lst, ft_del);
	printf("deleted node = %s\n", (char *) lst->content);
} */