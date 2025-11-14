/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:27:49 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/14 16:15:47 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	negative;

	i = 0;
	result = 0;
	negative = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			negative = 1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + nptr[i] - 48;
		i++;
	}
	if (negative == 1)
		return (-result);
	return (result);
}

/*#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	char str[] = "     -128";
	int	result = atoi(str);
	printf("atoi : result = %d\n", result);
	int result_ft = ft_atoi(str);
	printf("ft_atoi : result = %d\n", result_ft);
}*/
