#include <stddef.h>
#include <stdio.h>
#include <string.h>
/*
int	next_del(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s != '\0' && s* != c)
		len++;
	return (len);
}
*/
int	count_words(char const *s, char c)
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
/*
char	**ft_split(char const *s, char c)
{
	int	i;
	char	*head;

	i = 0;
	head = *s;
	i = next_del(char const *s, char c);
	while (i != 0)
	{
		
	}
}
*/
int main()
{
	char *tab = ",u,,uiiiiu,,o";
	char del = ',';
	printf("%d\n", count_words(tab, del));
}
