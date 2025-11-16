#include "libft.h"

int	ft_countwords(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

char	*ft_dupword(char *str, char *charset, int *i)
{
	int		len;
	char	*dupword;
	int		j;

	j = 0;
	len = *i;
	while (str[len] && ft_sep(str[len], charset) == 0)
		len++;
	dupword = malloc(sizeof(char) * (len + 1));
	if (dupword == NULL)
		return (NULL);
	while (*i < len)
	{
		dupword[j] = str[*i];
		(*i)++;
		j++;
	}
	dupword[j] = '\0';
	return (dupword);
}

char	**ft_split(char const *s, char c)
{
	char	**words_array;
	int		i;
	int		j;

	i = 0;
	j = 0;
	words_array = malloc(sizeof(char const *) * (ft_countwords(s, c) + 1));
	while (str[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		if (s[i] != c && s[i] != '\0')
		{
			words_array[j] = ft_strdup(s, charset, &i);
			while (str[i] && ft_sep(str[i], charset) == 0)
				i++;
		}
		j++;
	}
	words_array[j] = NULL;
	if (!str[0] || (ft_allstr_is_charset(str, charset) == 1))
		words_array[0] = NULL;
	return (words_array);
}

