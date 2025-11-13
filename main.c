/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 09:01:14 by stmaire           #+#    #+#             */
/*   Updated: 2025/11/13 12:28:01 by stmaire          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"
#include "stdio.h"
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>

int	main(int argc, char **argv)
{
    char    c;
    (void)argc;
    c = argv[1][0];
//ft_isalpha   
    if (ft_isalpha(c) == 0)
        printf("%d n'est pas un caractère alphabétique.\n", c);
    else
        printf("%d est un caractère alphabétique.\n", c);
    if (isalpha(c) == 0)
        printf("%d n'est pas un caractère alphabétique.\n", c);
    else
        printf("%d est un caractère alphabétique.\n\n", c);    
//ft_isdigit    
    if (ft_isdigit(c) == 0)
        printf("%d n'est pas un chiffre.\n", c);
    else
        printf("%d est un chiffre.\n", c);
    if (isdigit(c) == 0)
        printf("%d n'est pas un chiffre.\n", c);
    else
        printf("%d est un chiffre.\n\n", c);    
//ft_isalnum
	 if (ft_isalnum(c) == 0)
        printf("%d n'est pas un caractère alphanumérique.\n", c);
    else
        printf("%d est un caractère alphanumérique>\n", c);
    printf("isalnum\n");
    if (isalnum(c) == 0)
        printf("%d n'est pas un caractère alphanumérique.\n", c);
    else
        printf("%d est un caractère alphanumérique.\n\n", c);    
//ft_isascii
    if (ft_isascii(c) == 0)
        printf("%d n'est pas un caractère de la table ascii.\n", c);
    else
        printf("%d est un caractère de la table ascii\n", c);
    printf("isascii\n");
    if (isascii(c) == 0)
        printf("%d n'est pas un caractère de la table ascii.\n", c);
    else
        printf("%d est un caractère de la table ascii.\n\n", c);
//ft_isprint
    if (ft_isprint(c) == 0)
        printf("%d n'est pas un caractère printable.\n", c);
    else
        printf("%d est un caractère printable.\n", c);
    printf("isprint\n");
    if (isprint(c) == 0)
        printf("%d n'est pas un caractère printable.\n", c);
    else
        printf("%d est un caractère printable.\n\n", c);
://ft_strlen
 	char    str1[10] = "stephanie";
    size_t  len;

    printf("ft_strlen\n");
    printf("la longueur de la chaîne est de %zu\n", len = ft_strlen(str1));
    printf("strlen\n");
    printf("la longueur de la chaîne est de %zu\n", len = strlen(str1));
//ft_memset
	char    s1[100];
    char    s2[100];
    int     i;
    
    i = 0;
    c = 'S';
    printf("ft_memset\n");
    ft_memset(s1, c, 12);
    while (i < 12)
    {
        printf("%c", s1[i]);
        i++;
    }
    printf("\n");
    printf("memset\n");
    memset(s2, c, 12);
	i = 0;    
	while (i < 12)
    {
        printf("%c", s2[i]);
        i++;
    }
    printf("\n");
//ft_bzero 
    char    s3[] = "stephanie";
    char    s4[] = "stephanie";

    printf("s = %s\n", s3);
    ft_bzero(s3, 4);
    printf("ft_bzero : %s\n", s3);
    bzero(s4, 4);
    printf("bzero : %s\n", s4);
//ft_memcpy
	char src[] = "stephanie";
    char dest1[100];
    char dest2[100];
    memcpy(dest1, src, ft_strlen(src) + 1);
    printf("memcpy : %s, %s\n", src, dest1);
    ft_memcpy(dest2, src, ft_strlen(src) + 1);
    printf("ft_memcpy : %s, %s\n", src, dest2);
//ft_memmove
	char    str5[10] = "stephanie";
    char    str6[12] = "stephanie";

    printf("str5 = %s\n", str5);
    memmove(str5 + 2, str5, 7);
    printf("memmove : new string = %s\n", str5);
    ft_memmove(str6 + 2, str6, 7);
    printf("ft_memmove : new string = %s\n", str6);
//ft_strlcpy
    char    src1[] = "hello";
    char    src2[] = "hello";

    printf("return  strlcpy = %zu\n", strlcpy(dest1, src1, 12));
    printf("dest = %s\n", dest1);
    printf("return  ft_strlcpy = %zu\n", ft_strlcpy(dest2, src2, 12));
    printf("dest = %s\n", dest2);
//ft_strlcat
	char    src3[7] = " hello";
    char    src4[7] = " hello";
    char    dest7[20] = "Stephanie";
    char    dest8[20] = "Stephanie";
    size_t  result1;
    size_t  result2;

    result1 = strlcat(dest7, src3, 22);
    printf("result strlcat = %zu\n", result1);
    printf("dest = %s\n", dest7);
    result2 = ft_strlcat(dest8, src4, 22);
    printf("result ft_strlcat = %zu\n", result2);
    printf("dest = %s\n", dest8);
//ft_toupper
	int		result_toupper;
	int		result_ft_toupper;

	c = 's';
	printf("Le caractère est : %c\n", c);
	result_toupper = toupper(c);
	printf("avec toupper, result = %d\n", result_toupper);
	result_ft_toupper = ft_toupper(c);
	printf("avec mon toupper, result = %d\n", result_toupper);
//ft_tolower
	int		result_tolower;
	int		result_ft_tolower;

	c = 'i';
	printf("Le caractère est : %c\n", c);
	result_tolower = tolower(c);
	printf("avec tolower, result = %d\n", result_tolower);
	result_ft_tolower = ft_tolower(c);
	printf("avec ft_tolower, result = %d\n", result_ft_tolower);
//ft_strchr
	char	str_strchr[] = "Stéphanie";
	char	c = '\0';
	printf("avec ft_strchr, return = %p\n", ft_strchr(str_strchr, c));
	printf("avec strchr, return = %p\n", strchr(str_strchr, c));
//ft_strrchr
	char	str_strrchr[] = "ananas";
	char	c = '\0';
	printf("avec ft_strrchr, return = %p\n", ft_strrchr(str_strrchr, c));
	printf("avec strrchr, return = %p\n", strrchr(str_strrchr, c));
//ft_strncmp
	char	s1_strncmp[] = "Stephanie";
	char	s2_strncmp[] = "hello";
	int		result_strncmp = strncmp(s1_strncmp, s2_strncmp, 4);
	int		result_ft_strncmp = ft_strncmp(s1_strncmp, s2_strncmp, 4);
	printf("avec strncmp, result = %d\n", result_strncmp);
	printf("avec ft_strncmp, result = %d\n", result_ft_strncmp);
}*/
