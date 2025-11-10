/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srlen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 09:31:17 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/10 10:20:46 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	size_t	len;

	(void)argc;
	printf("ft_strlen\n");
	printf("la longueur de la chaîne est de %zu\n", len = ft_strlen(argv[1]));
	printf("strlen\n");
	printf("la longueur de la chaîne est de %zu\n", len = strlen(argv[1]));
}*/
