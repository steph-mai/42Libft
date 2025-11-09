int ft_isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))  
        return(1);
    else
        return(0);
}

#include <stdio.h>

int main(int argc, char **argv)
{
    char    c;
    (void)argc;
    c = argv[1][0];
    printf("ft_isalpha\n");
    if (ft_isalpha(c) == 1)
        printf("%d est un caractère alphabétique.\n", c);
    else
        printf("%d n'est pas un caractère alphabétique.\n", c);
    printf("isalpha\n");
    if (ft_isalpha(c) == 1)
        printf("%d est un caractère alphabétique.\n", c);
    else
        printf("%d n'est pas un caractère alphabétique.\n", c);    
}