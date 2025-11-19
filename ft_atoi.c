/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:27:49 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/19 17:01:22 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_overflow(long result, int digit, int negative)
{
	if (result > LONG_MAX / 10)
	{
		if (negative == 1)
			return (0);
		return (-1);
	}
	if ((result == LONG_MAX / 10 && digit > LONG_MAX % 10))
	{
		if (negative == 1)
			return (0);
		return (-1);
	}
	return (1);
}

int	ft_atoi(const char *nptr)
{
	int		i;
	long	result;
	int		negative;
	int		check;

	i = 0;
	result = 0;
	negative = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		negative = (nptr[i++] == '-');
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		check = ft_check_overflow(result, nptr[i] - '0', negative);
		if (check != 1)
			return (check);
		result = result * 10 + nptr[i++] - '0';
	}
	if (negative == 1)
		return (-result);
	return (result);
}

/*#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	char str[] = "     -12825486548454";
	long	result = atoi(str);
	printf("atoi : result = %ld\n", result);
	long	 result_ft = ft_atoi(str);
	printf("ft_atoi : result = %ld\n", result_ft);
}*/
