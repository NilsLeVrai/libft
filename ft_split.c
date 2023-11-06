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
char	**ft_split(char const *s, char c)
{
	int	nb_words;
	char	**p;
	size_t	head;
	size_t	tail;
	int	i;
	nb_words = count_words(s, c);
	p = (char **) malloc((sizeof(char *) * nb_words + 1));
	if (!p || !s)
		return (NULL);
	head = 0;
	tail = 0;
	i = 0;
	while (nb_words > i)
	{
		while (*s == c && *s)
		{
			tail++;
			head++;
			s++;		
		}
		while (*s != c && *s)
		{
			head++;
			s++;
		}
		p[i] = ft_substr(s, tail, head - tail);
		tail = head;
		i++;
	}
	p[i] = NULL;
	return (p);
}
#include <stdio.h>
int main()
{
	char *tab = "oui,non,oui";
	char **split;
	char del = ',';
	int	i = 0;
	split = ft_split(tab, del);
	while (split[i] != NULL)
	{
		printf("%s\n", split[i]); 
		i++;
	}
}
