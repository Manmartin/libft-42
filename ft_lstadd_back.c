/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmarti <manmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 18:30:10 by manmarti          #+#    #+#             */
/*   Updated: 2021/02/05 11:54:36 by manmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *aux;

	if (lst)
	{
		if (!*lst)
			*lst = new;
		else
		{
			aux = ft_lstlast(*lst);
			aux->next = new;
		}
	}
}
