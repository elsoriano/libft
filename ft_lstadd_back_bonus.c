/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 11:54:41 by rodrigo           #+#    #+#             */
/*   Updated: 2024/05/05 13:26:26 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;
	
	if (!new)
		return;
	if (!*lst)
		ft_lstadd_front(lst, new);
	node = ft_lstlast(*lst);
	node->next = new;
	new->next = NULL;
}

/* int	main(void)
{
	t_list	**lst;
	t_list	*aux;
	
	lst = malloc(sizeof(t_list));
	ft_lstadd_front(lst, ft_lstnew("first"));
	ft_lstadd_back(lst, ft_lstnew("second"));
	ft_lstadd_back(lst, ft_lstnew("third"));
	aux = *lst;
	while (aux)
	{
		printf("%s\n", (char *) aux->content);
		aux = aux->next;
	}
	return (0);
} */