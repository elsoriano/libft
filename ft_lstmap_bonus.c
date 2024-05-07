/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:07:27 by rodrigo           #+#    #+#             */
/*   Updated: 2024/05/07 17:01:19 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *))
{
	t_list	*fnode;
	t_list	*nwnd;

	if (!lst)
		return (NULL);
	nwnd = ft_lstnew(f(lst->content));
	fnode = nwnd;
	while (lst->next)
	{
		lst = lst->next;
		nwnd->next = ft_lstnew(f(lst->content));
		if (!nwnd->next)
		{
			ft_lstclear(&fnode, del);
			return (NULL);
		}
		nwnd = nwnd->next;
	}
	return (fnode);
}

/* int	main(void)
{
	t_list	**lst;
	t_list	*aux;

	lst = malloc(sizeof(t_list *));
	if (!lst)
		return (1);
	*lst = ft_lstnew(ft_strdup("first"));
	ft_lstadd_back(lst, (void *) ft_strdup("second"));
	ft_lstadd_back(lst, (void *) ft_strdup("third"));
	ft_lstadd_back(lst, (void *) ft_strdup("fourth"));
	aux = *lst;
	while (aux)
	{
		printf("%s\n", (char *) aux->content);
		aux = aux->next;
	}
} */