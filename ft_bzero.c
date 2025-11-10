/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:41:54 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/10 13:56:17 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

/*#include <stdio.h>

int 	main(void)
{
	char	s1[] = "stephanie";
	char	s2[] = "hello";

	printf("%s\n%s\n", s1, s2);
	ft_bzero(s1, 4);
	ft_bzero(s2, 5);
	printf("%s\n%s\n", s1, s2);
}*/	
