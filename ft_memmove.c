/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:13:58 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/10 17:47:22 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	s1 = (unsigned char *)src;
	s2 = (unsigned char *)dest;
	if (dest == src)
		return (dest);
	if (s2 < s1 || s2 >= s1 + n)
		ft_memcpy(s2, s1, n);
	else
	{
		while (n > 0)
		{
			n--;
			s2[n] = s1[n];
		}
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int		main(void)
{
	char	str1[10] = "stephanie";
	char	str2[12] = "stephanie";

	printf("str1 = %s\n", str1);
	memmove(str1 + 2, str1, 7);
	printf("memmove : new string = %s\n", str1);
	ft_memmove(str2 + 2, str2, 7);
    printf("ft_memmove : new string = %s\n", str2);
	return (0);
}*/
