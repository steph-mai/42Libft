/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:26:41 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/10 13:34:42 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	char	s1[100];
	char	s2[100];
	char	c;
	
	c = argv[1][0];
	(void)argc;
	printf("ft_memset\n");
	ft_memset(s1, c, 12);
	printf("%s\n", s1);
	printf("memset\n");
	memset(s2, c, 12);
	printf("%s\n", s2);
	return (0);
}*/
