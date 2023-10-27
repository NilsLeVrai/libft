#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <bsd/string.h>
char	*ft_strtrim(char const *s1, char const *set)
{
	char *p;
	int i;
	int j;

	i = 0;
	while (s1[i] && strchr(set, s1[i]))
		i++;
	j = strlen(s1) - 1;
	while (j >= i && strchr(set, s1[j]))
		j--;
	p = (char *)malloc(j - i + 2); // +2 pour le caractère nul '\0'
	if (!p)
		return (NULL);
	strlcpy(p, s1 + i, j - i + 2);
	return (p);
}
int main()
{
	const char *s1 = "abcdefgh";
	const char *set = (void*)NULL;
	printf("%s", ft_strtrim(s1, set));
}