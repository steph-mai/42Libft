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
	size_t	size;
	size_t	i;

	i = 0;
	if (!lst)
		return;
	if (lst->next == NULL)
	{
		lst->next == new;
		new->next == NULL;
	}
	size = ft_lstsize(lst);
	while (i < size)
	{
		
	}
