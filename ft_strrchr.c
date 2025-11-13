/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 09:46:20 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/13 09:58:52 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	len;

	len = ft_strlen(s);
	if (c == '\0')
		return ((char *)&s[len]);
	while (len > 0)
	{
		len--;
		if (s[len] == c)
			return ((char *)&s[len]);
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str_strrchr[] = "ananas";
	char	c = '\0';
	printf("avec ft_strrchr, return = %p\n", ft_strrchr(str_strrchr, c));
	printf("avec strrchr, return = %p\n", strrchr(str_strrchr, c));
	return (0);
}*/
