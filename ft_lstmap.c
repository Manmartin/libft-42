/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmarti <manmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:50:12 by manmarti          #+#    #+#             */
/*   Updated: 2021/02/05 18:15:01 by manmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *newlst;
	t_list *aux;

	if (!lst || !f)
		return (0);
	aux = lst;
	newlst = 0;
	while (aux)
	{
		if (!(new = ft_lstnew(f(aux->content))))
		{
			ft_lstclear(&newlst, del);
			return (0);
		}
		ft_lstadd_back(&newlst, new);
		aux = aux->next;
	}
	return (newlst);
}
