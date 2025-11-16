
#include "libft.h"

char *ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;
	
	len = ft_strlen(s);
	dup = malloc(sizeof(const char) * (len + 1));
	dup = (char *)s;
	return (dup);
}

#include <stdio.h>

int	main(void)
{
	const char	s[] = "stéphanie";
	char		*dup;
	dup = ft_strdup(s);
	printf("chaîne dupliquée = %s\n", dup);
	return (0);
}
