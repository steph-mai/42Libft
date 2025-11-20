/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 17:39:43 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/19 17:59:38 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last_node;
	
	if (!lst || !new)
		return;
	if (*lst == NULL)
	{
		*lst = new;
		new->next == NULL;
		return;
	}
	last_node = ft_lstlast(*lst);
	l
		last_node->next = new;
		new->next = NULL;
}
