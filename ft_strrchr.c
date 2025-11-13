/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:26:38 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/13 09:34:29 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	if (c == '\0')
		return (&str[i]);
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str_strchr[] = "Stéphanie";
	char	c = '\0';
	printf("avec ft_strchr, return = %p\n", ft_strchr(str_strchr, c));
	printf("avec strchr, return = %p\n", strchr(str_strchr, c));
	return (0);
}*/
