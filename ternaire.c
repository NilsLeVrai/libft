/* 
#include <stdio.h>
int main()
{
    char *tab;
    tab[10] = "paz";
	char *tab2;
    tab2[10] = "paz";
    *tab == *tab2 ? printf("vrai") : printf("faux");
} */
#include <stddef.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (i == n)
		return (0);
	while (i < n && (s1[i] != '\0' && s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}


#include <stdio.h>
#include <string.h>
int main()
{
    char *tab = "\0";
	char *tab2 = "823459";
	size_t n = 2;

	printf("Moi: %d\n", ft_strncmp(tab, tab2, n));
	printf("Pas moi: %d\n", strncmp(tab, tab2, n));
}
