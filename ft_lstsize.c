/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 12:10:45 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/19 17:05:35 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_lstsize(t_list *lst)
{
	int		count;

	if (!lst)
		return (0);
	count = 1;
	while (lst->next != NULL)
	{
		count ++;
		lst = lst->next;
	}
	return (count);
}
