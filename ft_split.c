#include "libft.h"
	
static int	count_words(char const *s, char c)
{
	size_t	words;
	int	is_del;

	words = 0;
	is_del = 0;
	while (*s)
	{
		if (*s != c && is_del == 0)
		{
			is_del = 1;
			words++;
		}
		else if (*s == c)
			is_del = 0;
		s++;
	}
	return (words);
}

/* static char	*ft_allouer(char const *s, size_t head, size_t tail)
{
	char	*p;
	int	i;

	i = 0;
	p = (char *)malloc(sizeof(char) * (tail - head) + 1);
	if (!p)
		return (NULL);
	while (head < tail)
		p[i++] = s[head++];
	p[i] = '\0';
	return (p);
} */
char	**ft_split(char const *s, char c)
{
	int		nb_words;
	char	**p;

	nb_words = count_words(s, c);
	p = (char **) malloc((sizeof(char *) * nb_words + 1));
	if (!p || !s)
		return (NULL);
	while (nb_words > 0)
	{

		nb_words--;	
	}
	*p = '\0';
	return (p);
}
/*
int main()
{
	char *tab = ",u,,uiiiiu,,o";
	char del = ',';
	printf("%d\n", count_words(tab, del));
}
*/
