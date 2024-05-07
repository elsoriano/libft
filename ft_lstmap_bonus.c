/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:07:27 by rodrigo           #+#    #+#             */
/*   Updated: 2024/05/07 13:13:51 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *))
{
	t_list	**nlst;
	t_list	*nxtnd;
	t_list	*nwnd;

	nlst = malloc(sizeof(t_list *));
	if (!nlst || !lst)
		return (NULL);
	nwnd = *nlst;
	while (nwnd)
	{
		nwnd = ft_lstnew(strdup(f(lst->content)));
		if (!nwnd)
		{
			ft_lstclear(nlst, ft_lstdelone);
			return (NULL);
		}
		nxtnd = lst->next;
		if (nxtnd)
			nwnd->next = ft_lstnew(strdup(f(nxtnd->content)));
		nwnd = nxtnd;
	}
	nwnd->next = NULL;
	return (*nlst);
}

int	main(void)
{
	t_list	**lst;
	t_list	*aux;

	lst = malloc(sizeof(t_list *));
	if (!lst)
		return (1);
	*lst = ft_lstnew(strdup("first"));
	ft_lstadd_back(lst, strdup("second"));
	ft_lstadd_back(lst, strdup("third"));
	ft_lstadd_back(lst, strdup("fourth"));
	aux = *lst;
	while (aux)
	{
		printf("%s\n", aux->content);
		aux = aux->next;
	}
}