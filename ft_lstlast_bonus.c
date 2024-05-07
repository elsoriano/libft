/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 10:19:55 by rodrigo           #+#    #+#             */
/*   Updated: 2024/05/07 09:02:30 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return NULL;
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/* int	main(void)
{
	t_list	*node1;
	t_list	*node2;

	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	if (!node1 || !node2)
		return (1);
	node1->content = "first";
	node1->next = node2;
	node2->content = "last";
	node2->next = NULL;
	printf("lst size = %d\n", ft_lstsize(node1));
	printf("ultimo elemento = %s\n", (char *)ft_lstlast(node1)->content);	
} */